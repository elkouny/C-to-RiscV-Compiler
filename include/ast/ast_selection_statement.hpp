#ifndef ast_selection_statement_hpp
#define ast_selection_statement_hpp

#include "ast_block.hpp"

class IfElse : public Block {
private:
    BlockPtr expression;
    BlockPtr statement;
    BlockPtr else_statement;
public:
    IfElse(BlockPtr _expression, BlockPtr _statement, BlockPtr _else_statement)
        : expression(_expression)
        , statement(_statement)
        , else_statement(_else_statement)
    {}
    IfElse(BlockPtr _expression, BlockPtr _statement)
        : expression(_expression)
        , statement(_statement)
        , else_statement(nullptr)
    {}
    ~IfElse() {
        delete expression;
        delete statement;
        delete else_statement;
    }
    virtual void print (std::ostream &dst) const override {
        dst << "\n    IF [ ";
        expression->print(dst);
        dst << " ]";
        statement->print(dst);
        if (else_statement != nullptr) {
            dst << "\n    Else [ ";
            else_statement->print(dst);
            dst << " ]";
        }
    }
    
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override{
        std::string l2  = make_label(".L");
        std::string l3 = make_label(".L");
        context.regs.useReg(destReg);
        expression->generateRISC(dst,context,destReg);
        Three_op(dst,"beq",destReg,"zero",l2);
        statement->generateRISC(dst,context,destReg);
        if(else_statement!=nullptr){
            One_op(dst,"j",l3);
            label(dst,l2);
            else_statement->generateRISC(dst,context,destReg);
            label(dst,l3);
        }
        else{
            label(dst,l2);
        }
        context.regs.freeReg(destReg);
    }

};

#endif