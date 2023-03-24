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
       if(v=="int" || v=="unsigned"){
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
