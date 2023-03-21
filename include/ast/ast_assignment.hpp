#ifndef ast_assignment_hpp
#define ast_assignment_hpp
#include "ast_block.hpp"
class Assignment : public Block {
private:
    BlockPtr var;
    std::string op;
    BlockPtr expression;

public:
    Assignment(BlockPtr _var,std::string _op , BlockPtr _expression )
        : var(_var)
        , op(_op)
        , expression(_expression)
    {}
    ~Assignment() {
        delete var;
        delete expression;
    }

    std::string getOp() const { return op; }
    BlockPtr getExpression() const { return expression; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        New Assignment: [ ";
        var->print(dst);
        dst << " Operator: [ ";
        dst << op;
        dst << " ] ";
        expression->print(dst);
        dst << " ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (!var->isArray()){

            std::string varname = var->getIdentifier();
            int offset = context.getVarInfo(varname).offset;

            std::string reg = context.regs.nextFreeReg();
            expression->generateRISC(dst, context, reg);
            sw_lw(dst,"sw",reg,offset,"s0");

            // context.debugScope(dst);
        }
        else {

            std::string varname = var->getIdentifier() + "[0]";
            int offset = context.getVarInfo(varname).offset;
            
            context.regs.useReg(destReg);
            std::string reg = context.regs.nextFreeReg();
            context.regs.useReg(reg);
            expression->generateRISC(dst, context, destReg);

            if (offset == 0){
                // dst<< " AST ASSIGNMENT GLOBAL "<<std::endl;
                lui(dst,"lui",reg,"%hi",var->getIdentifier());
                addi(dst,"addi",reg,reg,"%lo",var->getIdentifier());

                std::string ireg = context.regs.nextFreeReg();
                context.regs.useReg(ireg);
                var->getIndex()->generateRISC(dst,context,ireg);
                std::string reg4 = context.regs.nextFreeReg();
                context.regs.useReg(reg4);

                Two_op(dst,"li",reg4,"4");
                Three_op(dst,"mul",ireg,ireg,reg4);
                Three_op(dst,"add",ireg,reg,ireg);
                sw_lw(dst,"sw",destReg,0,ireg);
                context.regs.freeReg(reg4);
                context.regs.freeReg(reg);
                context.regs.freeReg(ireg);
            }

            else{
                // dst<< " AST ASSIGNMENT LOCAL "<<std::endl;
                std::string ireg = context.regs.nextFreeReg();
                context.regs.useReg(ireg);
                var->getIndex()->generateRISC(dst,context,ireg);
                std::string reg4 = context.regs.nextFreeReg();
                context.regs.useReg(reg4);
                std::string oreg = context.regs.nextFreeReg();

                Two_op(dst,"li",reg4,"4");
                Three_op(dst,"mul",ireg,ireg,reg4);
                Two_op(dst,"li",oreg,std::to_string(offset));
                Three_op(dst,"sub",ireg,oreg,ireg);
                Three_op(dst,"add",ireg,ireg,"s0");
                sw_lw(dst,"sw",destReg,0,ireg);

                context.regs.freeReg(reg);
                context.regs.freeReg(ireg);
                context.regs.freeReg(reg4);
            }
            context.regs.useReg(destReg);
            // context.debugScope(dst);
        }
    }
};


#endif
