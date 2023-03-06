#ifndef ast_expression_hpp
#define ast_expression_hpp

#include <string>
#include <iostream>

class Expression
    : public Block
{
private:
    std::string id;
public:
    Expression(const std::string &_id)
        : id(_id)
    {}

    const std::string getId() const
    { return id; }

    virtual void print(std::ostream &dst) const override
    {
        dst<<id;
    }

    virtual double evaluate(
        const std::map<std::string,double> &bindings
    ) const override
    {
        // TODO-B : Run bin/eval_expr with a Expression binding to make sure you understand how this works.
        // If the binding does not exist, this will throw an error

        return bindings.at(id);
    }    
};

#endif