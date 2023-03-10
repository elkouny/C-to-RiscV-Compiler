#ifndef ast_declarator_hpp
#define ast_declarator_hpp

#include "ast_block.hpp"

class Declarator : Block
{
private:
    std::string identifier;
protected:
    Declarator(std::string i) : identifier(i) {}
public:
    ~Declarator();

    std::string getIdentifier() const {
        return identifier;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<identifier;
    }
};

#endif