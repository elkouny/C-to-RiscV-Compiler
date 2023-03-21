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
        // std::vector<BlockPtr> *empty;
        // paramList = empty;
    }

    FunctionDeclarator(BlockPtr _declarator, std::vector<BlockPtr> *_paramList) {
        declarator= _declarator;
        paramList = _paramList;
    }

    ~FunctionDeclarator() {
        delete declarator;
        if (paramList != nullptr){
            for (auto i : *paramList){
                delete i;
            }
        }
    };

    virtual int isFunction() const override { 
        return 1;
    }

    virtual std::string getIdentifier() const override {
        return declarator->getIdentifier();
    }

    std::vector<BlockPtr> getDec()  const override { 
        if (paramList != nullptr) {
            return *paramList;
        } else {
            std::vector<BlockPtr> empty;
            return empty;
        }
    }


    virtual void print(std::ostream &dst) const override {
        dst<<" Function Declarator [ Function [ ";
        declarator->print(dst);
        dst<<" ] Parameters [ ";
        if (paramList != nullptr){
            for (auto param : *paramList){
                param->print(dst);
            }
        }
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string func_name = declarator->getIdentifier();
        context.newScope();
        context.is_function = 1;
        if (paramList != nullptr ){ // && (context.is_function)
            int x = 0;
            for (auto param : *paramList){
                if (x < 8){
                    param->generateRISC(dst,context,"a"+std::to_string(x));
                }
                else {
                    param->generateRISC(dst,context,std::to_string(x-8));
                }
                x++;
            }
        }
    }
};

#endif