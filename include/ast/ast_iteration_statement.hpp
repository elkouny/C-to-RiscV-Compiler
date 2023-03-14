#ifndef ast_iteration_statement_hpp
#define ast_iteration_statement_hpp

#include "ast_block.hpp"

class While: public Block {
private:
    BlockPtr expression;
    BlockPtr statement;
public:
    While(BlockPtr _expression, BlockPtr _statement)
        : expression(_expression)
        , statement(_statement)
    {}
    ~While() {
        delete expression;
        delete statement;
    }
    virtual void print (std::ostream &dst) const override {
        dst << "\n    WHILE [ ";
        expression->print(dst);
        dst << " ]\n    DO [ ";
        statement->print(dst);
        dst << " ]";
    }
};

#endif