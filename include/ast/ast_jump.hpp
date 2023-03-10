#ifndef ast_jump_hpp
#define ast_jump_hpp

#include "ast_block.hpp"

class Jump : Block
{
private:
    int constant;
protected:
    Jump(int c) : constant(c) {}
public:
    ~Jump();

    int getConstant() const {
        return constant;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<constant;
    }

    virtual void evaluate(std::ostream &dst) const override {
        dst<<"li a5,"<<getConstant()<<"\n";
    }
};

#endif