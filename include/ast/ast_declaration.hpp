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

    BlockPtr getDeclarator() const override { return init_declarator; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        Declaration [ Variable Type: [ ";
        dst << type << " ] ";
        init_declarator->print(dst);
        dst<<"]";
    } 


    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (!init_declarator->isFunction()){
            if (!init_declarator->isArray()){
                std::string varname = init_declarator->getIdentifier();
                int offset = context.getOverallOffset()-4;
                context.addVar(varname, type, offset);
                // init_declarator->generateRISC(dst, context, destReg);
            }
            else if(context.scope.size()!=1){
                int array_length = init_declarator->evalExpression();
                for ( int i = 0; i < array_length; i++ ){
                    int offset = context.getOverallOffset()-4;
                    std::string varname = init_declarator->getIdentifier() + "[" + std::to_string(i) + "]"; 
                    context.addVar(varname,type,offset);
                }
            }
            // GLOBAL VARS -- SEE COMMENT BELOW AS FOR WHY
            else{
                int array_length = init_declarator->evalExpression();
                for ( int i = 0; i < array_length; i++ ){
                    std::string varname = init_declarator->getIdentifier() + "[" + std::to_string(i) + "]"; 
                    // GIVES ALL GLOBAL VARS OFFSET = 0 IN CONTEXT
                    context.addVar(varname,type,0);

                    /*
                    HOW TO ACCESS ARRAY VARIABLE ( GLOBAL AND LOCAL )

                    GET VAR PARAMETERS
                    int index = expression->evalExpression()
                    std::string varname = identifier + "[" + std::to_string(index) + "]";
                    int offset = context.getVarInfo(varname).offset;

                    IF GLOBAL
                    if (offset = 0) {

                        GET VAR ADDRESS
                        int split = varname.find('[');
                        varname = varname.substr(0,split);
                        lui     a5, %hi(varname)
                        addi    a5, a5, %lo(varname)
                        (a5 has the address of x[])    
                        
                        READ
                        lw      a5, 4*index(a5)
                        
                        WRITE
                        codegen rhs into free reg (e.g. a4)
                        sw      a4, 4*index(a5)
                    }

                    IF LOCAL
                    else{
                        READ
                        lw      a5, offset(s0)
                        
                        WRITE
                        codegen rhs into free reg (e.g. a4)
                        sw      a4, offset(s0)
                    }
                    

                    THIS CODE WILL GO IN ASSIGNMENT OR SOMEWHERE ELSE MOST LIKELY
                    */
                }
            }
            // context.debugScope(dst);
            init_declarator->generateRISC(dst, context, destReg);
        }
    }
};
#endif