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
    
    ~Expression() {};

    int getConstant() const {
        return constant;
    }

    std::string getString() const {
        return string;
    }

    // int getSize() {
    //     return 1;
    // }

    virtual void print(std::ostream &dst) const override {
        dst<<" Expression [ ";
        if (constant != 0) {
            dst << "Constant: [ " << getConstant() << " ]";
        }
        else {
            dst << "String: [ " << getString() << " ]";
        }
        dst<< " ]";
    }

    // virtual void evaluate(std::ostream &dst) const override {
    //     dst<<"\nli a5,"<<getConstant();
    // }
    
    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     dst<<"li "<<context.regName(destReg)<<","<<getConstant()<<"\n";
    // }

};

#endif