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
            // context.regs.useReg(reg);
            expression->generateRISC(dst, context, reg);
            // context.regs.freeReg(reg);
            // HERE
            sw_lw(dst,"sw",reg,offset,"s0");
            // context.debugScope(dst);
        }
        else /*if(var->isArray()&&!expression->isArray())*/{

            // int index =  var->evalExpression();
            std::string varname = var->getIdentifier() + "[0]";
            int offset = context.getVarInfo(varname).offset;

            std::string reg = context.regs.nextFreeReg();
            context.regs.useReg(reg);
            expression->generateRISC(dst, context, reg);
            // context.regs.freeReg(reg);
            // HERE

            if (offset == 0){
                lui(dst,"lui",destReg,"%%hi",var->getIdentifier());
                addi(dst,"addi",destReg,destReg,"%%lo",var->getIdentifier());

                std::string ireg = context.regs.nextFreeReg();
                context.regs.useReg(ireg);
                var->getIndex()->generateRISC(dst,context,ireg);
                std::string reg4 = context.regs.nextFreeReg();

                Two_op(dst,"li",reg4,"4");
                Three_op(dst,"mul",ireg,ireg,reg4);
                lui(dst,"sw",reg,ireg,destReg);

                context.regs.freeReg(reg);
                context.regs.freeReg(ireg);
            }

            else{
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
                // Three_op(dst,"addi",ireg,ireg,std::to_string(offset));
                
                lui(dst,"sw",reg,ireg,"s0");
                
                context.regs.freeReg(reg);
                context.regs.freeReg(ireg);
                context.regs.freeReg(reg4);

                // sw_lw(dst,"sw",reg,offset,"s0");
            }

            // context.debugScope(dst);
        }
        // else{
        //     int exprindex = expression->evalExpression();
        //     int varindex = var->evalExpression();
            




        //     std::string varname = var->getIdentifier()+ "[" + std::to_string(varindex) + "]";
        //     int oVar = context.getVarInfo(varname).offset;

        //     std::string exprname = expression->getIdentifier() + "[" + std::to_string(exprindex) + "]";
        //     int oExpr = context.getVarInfo(exprname).offset;
        //     std::string reg = context.regs.nextFreeReg();

        //     if (oVar == 0 && oExpr == 0){
        //         lui(dst,"lui",destReg,"%%hi",expression->getIdentifier());
        //         addi(dst,"addi",destReg,destReg,"%%lo",expression->getIdentifier());
        //         sw_lw(dst,"lw",destReg,4*exprindex,destReg);
        //         lui(dst,"lui",destReg,"%%hi",var->getIdentifier());
        //         addi(dst,"addi",destReg,destReg,"%%lo",var->getIdentifier());
        //         sw_lw(dst,"sw",reg,varindex*4,destReg);
        //     }

        //     else if (oVar == 0 && !oExpr == 0){
        //         sw_lw(dst,"lw",reg,oExpr,"s0");
        //         lui(dst,"lui",destReg,"%%hi",var->getIdentifier());
        //         addi(dst,"addi",destReg,destReg,"%%lo",var->getIdentifier());
        //         sw_lw(dst,"sw",reg,varindex*4,destReg);
        //     }

        //     else if (!oVar == 0 && oExpr == 0){
        //         lui(dst,"lui",destReg,"%%hi",expression->getIdentifier());
        //         addi(dst,"addi",destReg,destReg,"%%lo",expression->getIdentifier());
        //         sw_lw(dst,"lw",destReg,exprindex*4,destReg);
        //         sw_lw(dst,"sw",destReg,oVar,"s0");
        //     }

        //     else{
        //         sw_lw(dst,"sw",destReg,oVar,destReg);
        //         sw_lw(dst,"lw",destReg,oExpr,"s0");
        //     }
        // }   
    }
};


#endif