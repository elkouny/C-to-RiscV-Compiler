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
};

#endif