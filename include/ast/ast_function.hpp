#ifndef ast_function_hpp
#define ast_function_hpp

#include "ast_block.hpp"

class Function : public Block {
private:
    std::string specifier;
    BlockPtr function_declarator;
    BlockPtr cstatement;
// protected:
public:
    Function(std::string s, BlockPtr d, BlockPtr c) : specifier(s), function_declarator(d), cstatement(c) {}

    virtual ~Function() {
        delete function_declarator;
        delete cstatement;
    }

    std::string getSpecifier() const {
        return specifier;
    }

    BlockPtr getDeclarator() const {
        return function_declarator;
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
        dst<<".text"<<std::endl;
        dst<<".globl "<<function_declarator->getIdentifier()<<std::endl;
        

        label(dst,function_declarator->getIdentifier());
        context.ret_label = make_label("return");

        int o=0;
        if (!cstatement->getDec().empty()){
           for (auto i : cstatement->getDec()){
                if (i->getDeclarator()->isArray()){
                    o += -4 * i->getDeclarator()->evalExpression();
                }
                else{
                    o += -4;
                }
            }
        }

        if (!function_declarator->getDec().empty()){
            int number_of_args = function_declarator->getDec().size();
            if (number_of_args <= 8){
                o+=number_of_args * - 4;
            }else{
                o-=32;
            } 
        }
        o-=44;
        context.offset += o;

        Three_op(dst,"addi","sp","sp",std::to_string(context.offset));   
        sw_lw(dst,"sw","ra",-4-context.offset,"sp");
        for (int i = 0; i < 12; i++ ){
            sw_lw(dst,"sw","s"+std::to_string(i),-4*(i+2)-context.offset,"sp");
        }
        Three_op(dst,"addi","s0","sp",std::to_string(-1*context.offset));


        if (!function_declarator->getDec().empty()){
            function_declarator->generateRISC(dst,context,destReg);
        }
    
        cstatement->generateRISC(dst, context, "a0");
        label(dst,context.ret_label);
        Two_op(dst,"mv","a0","t6");
        sw_lw(dst,"lw","ra",-4-context.offset,"sp");
        for (int i = 0; i < 12; i++ ){
            sw_lw(dst,"lw","s"+std::to_string(i),-4*(i+2)-context.offset,"sp");
        }
        Three_op(dst,"addi","sp","sp",std::to_string(-1*context.offset));
        context.offset -= o;
        One_op(dst,"jr","ra");
    }

};

#endif
