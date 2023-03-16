#ifndef ast_jump_statement_hpp
#define ast_jump_statement_hpp

#include "ast_block.hpp"

class jump_statement : public Block {
private:
    std::string type;
    BlockPtr expression;
public:
    jump_statement(std::string _type, BlockPtr _expression)
        : type(_type)
        , expression(_expression)
    {}
   
    ~jump_statement() {
        delete expression;
    }

    std::string getType() const { return type; }
    BlockPtr getExpression() const { return expression; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        Jump Statement [ ";
        dst << type << " ]";
        getExpression()->print(dst);  
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        try{
            if (type == "return") {
                std::string reg = context.regs.nextFreeReg();
                context.regs.useReg(reg);
                expression->generateRISC(dst, context, reg);
                dst << "mv " << destReg << ", " << reg << std::endl;
                context.regs.freeReg(reg);
            }
        }
        catch (...) {
            dst<<"Error in Jump Statement";
        }
    }

    
};
#endif
