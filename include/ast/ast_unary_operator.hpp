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


#endif
