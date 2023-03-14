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
        dst << "\n        Declaration [ Variable Type: [ ";
        dst << type << " ] ";
        declarator->print(dst);
        dst<<"]";
    }
 
};
#endif