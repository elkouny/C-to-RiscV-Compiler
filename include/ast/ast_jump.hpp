#ifndef ast_jump_hpp
#define ast_jump_hpp

#include "ast_block.hpp"

class jump_statement : public Block {
private:
    std::string type;
    BlockPtr expression;
public:
    jump_statement(std::string _type, BlockPtr _expression)
        : type(_type)
        , expression(_expression)
    {}
   
    ~jump_statement() {
        delete expression;
    }

    std::string getType() const { return type; }
    BlockPtr getExpression() const { return expression; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        [Jump Statement] ";
        dst << type;
        dst << " ] ";
        dst << "Expression : [ ";
        expression->print(dst);
        dst << " ] ";


        
    }
};
#endif
