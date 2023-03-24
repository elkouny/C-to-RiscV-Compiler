#ifndef ast_unary_operator_hpp
#define ast_unary_operator_hpp
#include "ast_block.hpp"
class UnaryOperator : public Block {
private:
    std::string op;
    BlockPtr expression;

public:
    UnaryOperator(std::string _op , BlockPtr _expression )
       :op(_op)
        , expression(_expression)
    {}
    ~UnaryOperator() {
        delete expression;
    }

    std::string getOp() const { return op; }
    
    BlockPtr getExpression() const { return expression; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        Unary Operator: [ ";
        dst << " Operator: [ ";
        dst << op;
        dst << " ] ";
        expression->print(dst);
        dst << " ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
       if(op=="-"){
            expression->generateRISC(dst,context,destReg);
            Two_op(dst,"neg",destReg,destReg);
       }
       else if (op=="+"){
            expression->generateRISC(dst,context,destReg);
       }
       else if (op=="!"){ // LOGICAL NOT
            expression->generateRISC(dst,context,destReg);
            Two_op(dst,"seqz",destReg,destReg);
            Three_op(dst,"andi",destReg,destReg,"0xff");
       } 
       else if (op=="~"){ // BITWISE NOT
            expression->generateRISC(dst,context,destReg);
            Two_op(dst,"not",destReg,destReg);
       } 
       else if (op=="&"){
            std::string varname;
            if (expression->isArray()){
                varname = expression->getIdentifier();
                int offset = context.getVarInfo(varname+"[0]").offset; 

                std::string ireg = context.regs.nextFreeReg();
                context.regs.useReg(ireg);
                std::string reg4 = context.regs.nextFreeReg();
                context.regs.useReg(reg4);
                std::string oreg = context.regs.nextFreeReg();

                if (offset == 0){
                    lui(dst,"lui",destReg,"%hi",varname);
                    addi(dst,"addi",destReg,destReg,"%lo",varname);
                    Two_op(dst,"li",reg4,"4");
                    Three_op(dst,"mul",ireg,ireg,reg4);
                    Three_op(dst,"add",destReg,ireg,destReg);
                }
                else{
                    std::string oreg = context.regs.nextFreeReg();
                    Two_op(dst,"li",reg4,"4");
                    Three_op(dst,"mul",ireg,ireg,reg4);
                    Two_op(dst,"li",oreg,std::to_string(offset));
                    Three_op(dst,"sub",ireg,oreg,ireg);
                    Three_op(dst,"add",destReg,ireg,"s0");
                }     
                context.regs.freeReg(ireg);
                context.regs.freeReg(reg4);    
            }
            else{
                varname = expression->getIdentifier();
                int offset = context.getVarInfo(varname).offset; 
                Three_op(dst,"addi",destReg,"s0",std::to_string(offset));
            }
       }
       else if (op == "*"){
            std::string addreg = context.regs.nextFreeReg();
            context.regs.useReg(addreg);
            expression->generateRISC(dst, context, addreg);
            sw_lw(dst,"lw",destReg,0,addreg);
            context.regs.freeReg(addreg);
       }
    }
};

class SizeOf : public Block {
private: 
    BlockPtr Expression;
    std::string typeofVar;
    int typeS;

public:
    SizeOf(BlockPtr B){
        Expression=B;
        typeS=1;

    }
    SizeOf(std::string T){
        typeofVar=T;
        Expression=nullptr;
        typeS=0;
    }
    ~SizeOf(){
        if(Expression!=nullptr){
            delete Expression;
        }
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string v=typeofVar;
       if(typeS==1){
            v = (context.getTypeVar(Expression->getIdentifier()));
       }
       if(v=="int" || v=="unsigned"||v=="float"){
            Two_op(dst,"li",destReg,"4");
        }
        else if(v=="char"){
            Two_op(dst,"li",destReg,"1");
        }
        else if(v=="double"){
            Two_op(dst,"li",destReg,"8");
        }
    }
    
    
};

#endif
