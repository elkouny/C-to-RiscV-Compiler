#ifndef ast_function_hpp
#define ast_fucntion_hpp

#include "ast_block.hpp"

class Function : public Block {
private:
    std::string specifier;
    BlockPtr declarator;
    BlockPtr cstatement;
// protected:
public:
    Function(std::string s, BlockPtr d, BlockPtr c) : specifier(s), declarator(d), cstatement(c) {}
    
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
        dst<<"[New Function]";
        dst<<"[Function Type] ";
        dst<<getSpecifier()<<" ";
        dst<<"[Declarator] ";
        getDeclarator()->print(dst);
        dst<<" {\n";
        dst<<"[Statements]";
        getStatement()->print(dst);
        dst<<"\n}\n";
    }

    virtual void evaluate(std::ostream &dst) const override { 
        dst<<getSpecifier()<<":\n";
        dst<<"addi sp,sp,-16\nsd s0,8(sp)\naddi s0,sp,16\n";
        getStatement()->evaluate(dst);
        dst<<"mv a0,a5\nld s0,8(sp)\naddi sp,sp,16\njr ra\n";
    }

    //virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     dst<<"addi sp,sp,-16\nsd s0,8(sp)\naddi s0,sp,16\n";
    //     getStatement()->generateRISC(dst, context, destReg);
    //     dst<<"mv a0,a5\nld s0,8(sp)\naddi sp,sp,16\njr ra\n";
    // }
};

#endif