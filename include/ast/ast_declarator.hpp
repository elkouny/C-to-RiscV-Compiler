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
    

    
    
};

#endif