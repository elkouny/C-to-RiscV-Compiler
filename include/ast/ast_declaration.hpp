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
    

    ~Declaration() {
        delete declarator;
    }

    std::string getType() const { return type; }
    BlockPtr getDeclarator() const { return declarator; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        [Variable Type] ";
        dst << type;
        dst << " ] ";
        declarator->print(dst);
    }
    // virtual void print(std::ostream &dst, unsigned indentLevel = 0) const override {
    //     std::string indent(indentLevel * 4, ' ');
    //     dst << indent << "Variable Declaration: " << std::endl;
    //     dst << indent << "├─ Type: " << type << std::endl;
    //     dst << indent << "└─ Declarator: " << std::endl;
    //     declarator->print(dst, indentLevel + 1);
    // }


    virtual void evaluate(std::ostream &dst) const override { dst<<""; }


    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     type->generateRISC(dst, context, destReg);
    //     dst << " ";
    //     declarator->generateRISC(dst, context, destReg);
    // }
};
#endif