#ifndef ast_declaration_hpp
#define ast_declaration_hpp

#include "ast_block.hpp"

class Declaration : public Block {
private:
    std::string type;
    BlockPtr declarator;
public:
    Declaration(std::string _type, BlockPtr _declarator)
        : type(_type)
        , declarator(_declarator)
    {}
    Declaration(std::string _type)
        : type(_type)
        , declarator(nullptr)
    {}

    ~Declaration() {
      

        if (declarator != nullptr){
            delete declarator;
        }
    }

    std::string getType() const { return type; }
    BlockPtr getDeclarator() const { return declarator; }

    virtual void print(std::ostream &dst) const override {
        dst << type;
        if (declarator != nullptr) {
            dst << " ";
            declarator->print(dst);
        }
    }

    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     type->generateRISC(dst, context, destReg);
    //     dst << " ";
    //     declarator->generateRISC(dst, context, destReg);
    // }
};
#endif