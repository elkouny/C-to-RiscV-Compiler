#ifndef ast_assignment_hpp
#define ast_assignment_hpp
#include "ast_block.hpp"
class Assignment : public Block {
private:
    BlockPtr var;
    std::string op;
    BlockPtr expression;
    
public:
    Assignment(BlockPtr _var,std::string _op , BlockPtr _expression )
        : var(_var)
        , op(_op)
        , expression(_expression)
    {}
    ~Assignment() {
        delete var;
        delete expression;
    }

    std::string getOp() const { return op; }
    BlockPtr getExpression() const { return expression; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n    New Assignment: [ ";
        var->print(dst);
        dst << " Operator: [ ";
        dst << op;
        dst << " ] ";
        expression->print(dst);
        dst << " ]";
    }

    // virtual void generateRISC(std::ostream &dst, Scope scope, int destReg) const override {
    //     std::string reg = scope.regs.nextFreeReg();

    //     scope.regs.useReg(reg);

    //     std::string varname = var->getVar();

    //     Params params = scope.getVarInfo(varname);

    //     if (scope.contexts.empty()) {
    //         int offset = -20;
    //         Context newContext;
    //         newContext.addContext(varname, params);
    //         scope.contexts.push_back(newContext);
    //     } 
        
    //     else {
    //         int offset = scope.contexts[-1].getCurrentOffset() - 4;
    //         scope.contexts[-1].addContext(varname, params);
    //     }
        
    //     scope.debugScope(dst);

    //     scope.regs.freeReg(varname);
    //     // declarator.generateRISC(dst, scope, destReg);
    //     // dst << " = ";
    //     // initializer->generateRISC(dst, scope, destReg);
    // }
 
};


#endif