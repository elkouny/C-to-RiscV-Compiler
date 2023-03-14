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
    BlockPtr getVar() const { return var; }
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

    // virtual void evaluate(std::ostream &dst) const override {
    //     var->evaluate(dst);
    //     dst << " " << op << " ";
    //     expression->evaluate(dst);
    // }   
};


#endif