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

    int getConstant() const {
        return constant;
    }

    std::string getVar() const {
        return variable;
    }

    // int getSize() {
    //     return 1;
    // }

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
            dst<<"\nli "<<destReg<<","<<constant<<"\n";
        }
        else if (type == 1) {
            int offset = context.getVarInfo(variable).offset;
            dst<<"\nlw "<<destReg<<","<<offset<<"(s0)"<<"\n";
        }
      
    
        
    }

};

#endif