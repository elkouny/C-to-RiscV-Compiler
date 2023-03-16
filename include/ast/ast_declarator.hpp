#ifndef ast_declarator_hpp
#define ast_declarator_hpp

#include "ast_block.hpp"

class Declarator : public Block
{
private:
    std::string identifier;
public:
    Declarator(std::string i) : identifier(i) {}

    ~Declarator() {};
    
    virtual std::string getIdentifier() const override {
        return identifier;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<getIdentifier();
    }
    
// virtual void print(std::ostream &dst, unsigned indentLevel = 0) const override {
//     std::string indent(indentLevel * 4, ' ');
//     dst << indent << "Identifier: " << getIdentifier() << std::endl;
// }

    
    // virtual void  generateRISC(std::ostream &dst, Context &context, int destReg) const override { }
};

#endif