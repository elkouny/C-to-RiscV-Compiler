#ifndef ast_expression_hpp
#define ast_expression_hpp

#include "ast_block.hpp"

class Expression : public Block
{
private:
    int constant;
    std::string variable;
    int type;
// protected:
public:
    Expression(int c) : constant(c), type(0) {}
    Expression(std::string v ) : variable(v), type(1) {}

    ~Expression() {};

    int evalExpression() const override {
        return constant;
    }
 
    std::string getIdentifier() const override {
        return variable;
    }
   
    virtual void print(std::ostream &dst) const override {
        dst<<" Expression [ ";
        if (type==0) {
            dst << "Constant: [ " << constant << " ]";
        }
        else {
            dst << "String: [ " << variable << " ]";
        }
        dst<< " ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (type == 0) {
            Two_op(dst,"li",destReg,std::to_string(constant));
        }
        else if (type == 1) {
            int offset = context.getVarInfo(variable).offset;
            sw_lw(dst,"lw",destReg,offset,"s0");
        }
    }
};

#endif
