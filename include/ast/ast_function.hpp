#ifndef ast_function_hpp
#define ast_fucntion_hpp

#include "ast_block.hpp"

class Function : Block {
private:
    std::string specifier;
    BlockPtr declarator;
    BlockPtr cstatement;
protected:
    Function(std::string s, BlockPtr d, BlockPtr c) : specifier(s), declarator(d), cstatement(c) {}
public:
    virtual ~Function() {
        delete declarator;
        delete cstatement;
    }
    
    std::string getSpecifier() const {
        return specifier;
    }

    BlockPtr getDeclarator() const {
        return declarator;
    }

    BlockPtr getStatement() const {
        return cstatement;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<specifier<<" ";
        getDeclarator()->print(dst);
        dst<<" {\n";
        getStatement()->print(dst);
        dst<<"\n}\n";
    }

    virtual void evaluate(std::ostream &dst) const override { 
        dst<<getSpecifier()<<":\n";
        dst<<"addi sp,sp,-16\nsd s0,8(sp)\naddi s0,sp,16\n";
        getStatement()->evaluate(dst);
        dst<<"mv a0,a5\n ld s0,8(sp)\n addi sp,sp,16\n jr ra\n";
    }
};

#endif