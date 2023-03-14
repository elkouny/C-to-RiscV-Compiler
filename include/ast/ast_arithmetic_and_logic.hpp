#ifndef ast_arithmetic_and_logic_hpp
#define ast_arithmetic_and_logic_hpp

#include "ast_block.hpp"

class Inc : public Block {
private:
    BlockPtr value;

public:
    Inc(BlockPtr _value)
        : value(_value)
    {}
    ~Inc() {
        delete value;
    }

    BlockPtr getValue() const { return value; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n    Increment: ";
        dst << " [ ";
        value->print(dst);
        dst << " ] ";
    }

};
class Dec : public Block {
private:
    BlockPtr value;

public:
    Dec(BlockPtr _value)
        : value(_value)
    {}
    ~Dec() {
        delete value;
    }

    BlockPtr getValue() const { return value; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n    Decrement: ";
        dst << " [ ";
        value->print(dst);
        dst << " ] ";
    }

};

class Multiplication : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    Multiplication(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~Multiplication() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Multiplication: ";
        dst << " [ ";
        left->print(dst);
        dst << " * ";
        right->print(dst);
        dst << " ] ";
    }

};


class Division : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    Division(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~Division() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Division: ";
        dst << " [ ";
        left->print(dst);
        dst << " / ";
        right->print(dst);
        dst << " ] ";
    }

};

class Addition : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    Addition(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~Addition() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Addition: ";
        dst << " [ ";
        left->print(dst);
        dst << " + ";
        right->print(dst);
        dst << " ] ";
    }

};

class Subtraction : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    Subtraction(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~Subtraction() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Subtraction: ";
        dst << " [ ";
        left->print(dst);
        dst << " - ";
        right->print(dst);
        dst << " ] ";
    }

};

class LessThan : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    LessThan(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~LessThan() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "LessThan: ";
        dst << " [ ";
        left->print(dst);
        dst << " < ";
        right->print(dst);
        dst << " ] ";
    }

};

class GreaterThan : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    GreaterThan(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~GreaterThan() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "GreaterThan: ";
        dst << " [ ";
        left->print(dst);
        dst << " > ";
        right->print(dst);
        dst << " ] ";
    }

};

class LessThanEqual : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    LessThanEqual(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~LessThanEqual() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "LessThanEqual: ";
        dst << " [ ";
        left->print(dst);
        dst << " <= ";
        right->print(dst);
        dst << " ] ";
    }

};

class GreaterThanEqual : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    GreaterThanEqual(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~GreaterThanEqual() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "GreaterThanEqual: ";
        dst << " [ ";
        left->print(dst);
        dst << " >= ";
        right->print(dst);
        dst << " ] ";
    }

};

class Equal : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    Equal(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~Equal() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Equal: ";
        dst << " [ ";
        left->print(dst);
        dst << " == ";
        right->print(dst);
        dst << " ] ";
    }

};

class NotEqual : public Block {
private:
    BlockPtr left;
    BlockPtr right;
    
public:
    NotEqual(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~NotEqual() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "NotEqual: ";
        dst << " [ ";
        left->print(dst);
        dst << " != ";
        right->print(dst);
        dst << " ] ";
    }

};

class BitwiseAnd : public Block {
private:
    BlockPtr left;
    BlockPtr right;
public:
    BitwiseAnd(BlockPtr _left, BlockPtr _right): left(_left), right(_right) {}
    
    ~BitwiseAnd() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }

    BlockPtr getRight() const { return right; }
    
    virtual void print(std::ostream &dst) const override {
        dst << "Bitwise And: ";
        dst << " [ : ";
        left->print(dst);
        dst << " & ";
        right->print(dst);
        dst << " ] ";
    }
};

class BitwiseXor : public Block {

private:
    BlockPtr left;
    BlockPtr right;
public:
    
    BitwiseXor(BlockPtr _left, BlockPtr _right) : left(_left), right(_right) {}
    
    ~BitwiseXor() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }

    BlockPtr getRight() const { return right; }
    
    virtual void print(std::ostream &dst) const override {
        dst << "Bitwise Xor: ";
        dst << " [ ";
        left->print(dst);
        dst << " ^ ";
        right->print(dst);
        dst << " ] ";
    }
};
    

class BitwiseOr : public Block {
private:
    BlockPtr left;
    BlockPtr right;
public:
    BitwiseOr(BlockPtr _left, BlockPtr _right): left(_left), right(_right) {}
    
    ~BitwiseOr() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }

    BlockPtr getRight() const { return right; }
    
    virtual void print(std::ostream &dst) const override {
        dst << "Bitwise Or: ";
        dst << " [ ";
        left->print(dst);
        dst << " | ";
        right->print(dst);
        dst << " ] ";
    }
};


class LogicalAnd : public Block {
private:
    BlockPtr left;
    BlockPtr right;
public:
    LogicalAnd(BlockPtr _left, BlockPtr _right): left(_left), right(_right) {}
    
    ~LogicalAnd() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }

    BlockPtr getRight() const { return right; }
    
    virtual void print(std::ostream &dst) const override {
        dst << "Logical And: ";
        dst << " [ ";
        left->print(dst);
        dst << " && ";
        right->print(dst);
        dst << " ] ";
    }
};

class LogicalOr : public Block {
private:
    BlockPtr left;
    BlockPtr right;
public:
    LogicalOr(BlockPtr _left, BlockPtr _right): left(_left), right(_right) {}
    
    ~LogicalOr() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }

    BlockPtr getRight() const { return right; }
    
    virtual void print(std::ostream &dst) const override {
        dst << "Logical Or: ";
        dst << " [ ";
        left->print(dst);
        dst << " || ";
        right->print(dst);
        dst << " ] ";
    }
};





#endif