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
        if (declarator->isArray()){
            return declarator->evalExpression() * expression->evalExpression();
        }
        else{
            return expression->evalExpression();
        }
    }

    virtual std::vector<int> arrIndexes() const override { 
        std::vector<int> indexes;
        if (declarator->isArray()){
            indexes = declarator->arrIndexes();
        }
        indexes.push_back(expression->evalExpression());
        return indexes;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<" Array Declarator [ Array [ ";
        declarator->print(dst);
        dst<<" ] Size [ ";
        expression->print(dst);
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        // One_op(dst,".globl",declarator->getIdentifier());
        label(dst,declarator->getIdentifier());
    }
};

#endif