#ifndef ast_operators_hpp
#define ast_operators_hpp

#include "ast_block.hpp"

class Operators : public Block {
private:
    BlockPtr left;
    BlockPtr right;
    std::string op;
public:
    Operators(BlockPtr _left, BlockPtr _right, std::string _op)
        : left(_left)
        , right(_right)
        , op(_op)
    {}
    ~Operators() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }
    std::string getOp() const { return op; }

    virtual void print(std::ostream &dst) const override {
        dst << "(";
        left->print(dst);
        dst << " " << op << " ";
        right->print(dst);
        dst << ")";
    }

    // virtual void evaluate(std::ostream &dst) const override {
    //     left->evaluate(dst);
    //     dst << " " << op << " ";
    //     right->evaluate(dst);
    // }      
};

#endif