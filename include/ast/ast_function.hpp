#ifndef ast_function_hpp
#define ast_function_hpp

#include "ast_block.hpp"

class Function : public Block {
private:
    std::string specifier;
    BlockPtr declarator;
    BlockPtr cstatement;
// protected:
public:
    Function(std::string s, BlockPtr d, BlockPtr c) : specifier(s), declarator(d), cstatement(c) {}

    virtual ~Function() {
        delete declarator;
        delete cstatement;
    }

    std::string getSpecifier() const {
        return specifier;
    }

    BlockPtr getDeclarator() const {
        return declarator;
    }

    BlockPtr getStatement() const {
        return cstatement;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<"New Function: [";
        dst<<" Function Type: ";
        dst<<"[ "<<getSpecifier()<<" ] ";
        dst<<"Function Name: [ ";
        getDeclarator()->print(dst);
        dst<<" ] ] [";
        getStatement()->print(dst);
        dst<<"\n] ";

    }

    virtual void generateRISC(std::ostream &dst , Context &context , std::string destReg) const override { 
        dst<<".globl "<<declarator->getIdentifier()<<std::endl;
        label(dst,declarator->getIdentifier());
        context.ret_label = make_label("return");
        int o;
        if (!cstatement->getDec().empty()){
            o=(cstatement->getDec().size()) * - 4 ;
        }
        else{
            o=0;
        }
        context.offset += o;
        Three_op(dst,"addi","sp","sp",std::to_string(context.offset));   
        sw_lw(dst,"sw","ra",-4-context.offset,"sp");
        sw_lw(dst,"sw","s0",-8-context.offset,"sp");
        Three_op(dst,"addi","s0","sp",std::to_string(-1*context.offset));
        /*
        
        
        
        
        
        */
        cstatement->generateRISC(dst, context, "a0");
        label(dst,context.ret_label);
        Two_op(dst,"mv","a0","t6");
        sw_lw(dst,"lw","ra",-4-context.offset,"sp");
        sw_lw(dst,"lw","s0",-8-context.offset,"sp");
        Three_op(dst,"addi","sp","sp",std::to_string(-1*context.offset));
        context.offset += (o * 4 );
        One_op(dst,"jr","ra");
    }


};

#endif
