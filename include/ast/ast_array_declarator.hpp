#ifndef ast_array_declarator_hpp
#define ast_rray_declarator_hpp

#include "ast_block.hpp"

class ArrayDeclarator : public Block
{
private:
    BlockPtr declarator;
    BlockPtr expression;
public:

    ArrayDeclarator(BlockPtr _declarator, BlockPtr _expressions) {
        declarator= _declarator;
        expression = _expressions;
    }

    ~ArrayDeclarator() {
        delete declarator;
        delete expression;
    };

    virtual int isArray() const override { return 1; }

    virtual std::string getIdentifier() const override {
        return declarator->getIdentifier();
    }

    virtual int evalExpression() const override { 
        return expression->evalExpression();
    }

    virtual void print(std::ostream &dst) const override {
        dst<<" Array Declarator [ Array [ ";
        declarator->print(dst);
        dst<<" ] Size [ ";
        expression->print(dst);
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        label(dst,declarator->getIdentifier());
    }
};

#endif