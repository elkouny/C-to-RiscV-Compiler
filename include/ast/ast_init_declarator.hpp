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

    virtual int isFunction() const override {
        return declarator->isFunction();
    }

    virtual std::string getIdentifier() const override {
        return declarator->getIdentifier();
    }

    BlockPtr getInitializer() const { return initializer; }

    virtual void print(std::ostream &dst) const override {
        dst<<"Variable Name: [ ";
        declarator->print(dst);
        dst<<" ] ";
        if (initializer != nullptr) {
            dst << "Variable assignment : [";
            initializer->print(dst);
            dst<<" ] ";
        }
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (initializer != nullptr) {
            std::string varname = declarator->getIdentifier();
            std::string reg = context.regs.nextFreeReg();
            context.regs.useReg(reg);
            initializer->generateRISC(dst, context, reg);
            int offset = context.getVarInfo(varname).offset;
            sw_lw(dst,"sw",reg,offset,"s0");
            context.regs.freeReg(reg);
        }
    }

};

#endif
