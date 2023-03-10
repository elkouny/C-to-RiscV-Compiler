#ifndef ast_declarator_hpp
#define ast_declarator_hpp

#include "ast_block.hpp"

class Declarator : public Block
{
private:
    std::string identifier;
// protected:
public:
    Declarator(std::string i) : identifier(i) {}

    ~Declarator();
    
    std::string getIdentifier() const {
        return identifier;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<getIdentifier();
    }
};

#endif