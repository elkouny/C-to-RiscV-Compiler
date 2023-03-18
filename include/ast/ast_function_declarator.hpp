#ifndef ast_function_declarator_hpp
#define ast_function_declarator_hpp

#include "ast_block.hpp"

class FunctionDeclarator : public Block
{
private:
    BlockPtr declarator;
    std::vector<BlockPtr> *paramList;
public:
    FunctionDeclarator(BlockPtr _declarator) {
        declarator = _declarator;
        std::vector<BlockPtr> *empty;
        paramList = empty;
    }

    FunctionDeclarator(BlockPtr _declarator, std::vector<BlockPtr> *_paramList) {
        declarator= _declarator;
        paramList = _paramList;
    }

    ~FunctionDeclarator() {
        delete declarator;
        for (auto i : *paramList){
            delete i;
        }
    };

    virtual void print(std::ostream &dst) const override {
        dst<<" Function Declarator [ Function [ ";
        declarator->print(dst);
        dst<<" ] Parameters [ ";
        for (auto i : *paramList){
            i->print(dst);
        }
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string func_name = declarator->getVar();
        // std::string reg = context.regs.nextFreeReg();
        // One_op(dst,"call",func_name);
        // Two_op(dst,"mv",destReg,"a0");

    }
};

#endif