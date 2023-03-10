#ifndef ast_expression_hpp
#define ast_expression_hpp

#include "ast_block.hpp"

class Expression : public Block
{
private:
    int constant;
    std::string string;
// protected:
public:
    Expression(int c) : constant(c) {}
    Expression(std::string s ) : string(s) {}
    
    ~Expression();

    int getConstant() const {
        return constant;
    }

    std::string getString() const {
        return string;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<constant;
    }

    virtual void evaluate(std::ostream &dst) const override {
        dst<<"li a5,"<<getConstant()<<"\n";
    }
};

#endif