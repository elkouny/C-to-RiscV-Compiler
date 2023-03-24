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

    virtual int isArray() const { return declarator->isArray(); }

    BlockPtr getInitializer() const { return initializer; }

    virtual int evalExpression() const override {
        return declarator->evalExpression();
    }

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
        if (!declarator->isArray()){
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
        else {
            if(context.scope.size()==1){
                int array_length = declarator->evalExpression();
                int init_length = 0;
                if (initializer == nullptr){
                    init_length = 0;
                }
                else {
                    init_length = initializer->getList().size();
                }
                // One_op(dst,".data",getIdentifier());
                dst<<".data"<<std::endl;
                label(dst,getIdentifier());
                for (int i = 0; i < array_length; i++) {
                    if (i > init_length-1){
                        One_op(dst,".zero","4");
                    }
                    else{
                        int value = initializer->getList()[i]->evalExpression();
                        One_op(dst,".word",std::to_string(value));
                    }
                }
            }
            else if(initializer!=nullptr){
                int init_len = initializer->getList().size();
                // int array_length = declarator->evalExpression();
                for (int i = 0; i < init_len; i++) {
                    std::string varname = getIdentifier()+"["+std::to_string(i)+"]";
                    std::string reg = context.regs.nextFreeReg();
                    context.regs.useReg(reg);
                    initializer->getList()[i]->generateRISC(dst, context, reg);
                    int offset = context.getVarInfo(varname).offset;
                    sw_lw(dst,"sw",reg,offset,"s0");
                    context.regs.freeReg(reg);
                }
            }
        }
        // context.debugScope(dst);
    }
};

#endif
