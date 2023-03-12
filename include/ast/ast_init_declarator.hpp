#ifndef ast_init_declarator_hpp
#define ast_init_declarator_hpp
#include "ast_block.hpp"

class Init_Declarator : public Block {
private:
    BlockPtr declarator;
    BlockPtr initializer;
public:
    Init_Declarator(BlockPtr _declarator, BlockPtr _initializer)
        : declarator(_declarator)
        , initializer(_initializer)
    {}
    Init_Declarator(BlockPtr _declarator)
        : declarator(_declarator)
        , initializer(nullptr)
    {}
    ~Init_Declarator() {
        delete declarator;
        if (initializer != nullptr){
            delete initializer;
        }
    }

    BlockPtr getDeclarator() const { return declarator; }
    BlockPtr getInitializer() const { return initializer; }

    virtual void print(std::ostream &dst) const override {
        declarator->print(dst);
        if (initializer != nullptr) {
            dst << " = ";
            initializer->print(dst);
        }
    }


    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     declarator->generateRISC(dst, context, destReg);
    //     dst << " = ";
    //     initializer->generateRISC(dst, context, destReg);
    // }
};
#endif