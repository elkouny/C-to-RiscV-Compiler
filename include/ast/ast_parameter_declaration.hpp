#ifndef ast_parameter_declaration_hpp
#define ast_parameter_declaration_hpp

#include "ast_block.hpp"

class ParameterDeclaration : public Block {
private:
    std::string type;
    BlockPtr declarator;
public:
    ParameterDeclaration(std::string _type, BlockPtr _declarator)
        : type(_type)
        , declarator(_declarator)
    {}

    ParameterDeclaration(std::string _type)
        : type(_type)
    {}
    
    ~ParameterDeclaration() {
        delete declarator;
    }

    std::string getType() const { return type; }

    BlockPtr getDeclarator() const { return declarator; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        Parameter Declaration [ Variable Type: [ ";
        dst << type << " ] ";
        dst<< "Variable [ ";
        declarator->print(dst);
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (destReg.find("a")!= std::string::npos){
            std::string varname = declarator->getIdentifier();
            int offset = context.getOverallOffset()-4;
            context.addVar(varname, type, offset);
            sw_lw(dst,"sw",destReg,offset,"s0");
        }
        else{
            std::string varname = declarator->getIdentifier();
            int offset = std::stoi(destReg) * 4;
            context.addVar(varname, type, offset);
        
        }

    }


 
};
#endif