#ifndef ast_declaration_hpp
#define ast_declaration_hpp

#include "ast_block.hpp"

class Declaration : public Block {
private:
    std::string type;
    BlockPtr init_declarator;
public:
    Declaration(std::string _type, BlockPtr _declarator)
        : type(_type)
        , init_declarator(_declarator)
    {}
    
    ~Declaration() {
        delete init_declarator;
    }

    std::string getType() const { return type; }

    BlockPtr getDeclarator() const { return init_declarator; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        Declaration [ Variable Type: [ ";
        dst << type << " ] ";
        init_declarator->print(dst);
        dst<<"]";
    } 


    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (!init_declarator->isFunction()){
            std::string varname = init_declarator->getIdentifier();
            int offset = context.getOverallOffset()-4;
            context.addVar(varname, type, offset);
            init_declarator->generateRISC(dst, context, destReg);
        }
        // context.debugScope(dst);
    }
};
#endif