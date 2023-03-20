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
    
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string varname = value->getIdentifier();
        std::string reg = context.regs.nextFreeReg();
        int offset = context.getVarInfo(varname).offset;
        context.regs.useReg(reg);
        value->generateRISC(dst,context,reg);
        Three_op(dst,"addi",reg,reg,"1");
        sw_lw(dst,"sw",reg,offset,"s0");
        context.regs.freeReg(reg);
    }

    virtual int evalExpression() const override {
        return value->evalExpression() +1;
       
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
    
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        std::string var = value->getIdentifier();
        value->generateRISC(dst,context,reg);
        int off = context.getVarInfo(var).offset;
        Three_op(dst,"addi",reg,reg,"-1");
        sw_lw(dst,"sw",reg,off,"s0");
        context.regs.freeReg(reg);
    }
    
    virtual int evalExpression()const override{
        return value->evalExpression() - 1;
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"mul",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

    }
    
    virtual int evalExpression() const override{
        return  left->evalExpression() * right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"div",destReg,destReg,reg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() / right->evalExpression();
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


    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"add",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression() const override{
        return  left->evalExpression() + right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sub",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() - right->evalExpression();
    }

};

class LeftShift : public Block {
private:
    BlockPtr left;
    BlockPtr right;

public:
    LeftShift(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~LeftShift() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Left shift: ";
        dst << " [ ";
        left->print(dst);
        dst << " << ";
        right->print(dst);
        dst << " ] ";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sll",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

    }

    virtual int evalExpression()const override{
        return  left->evalExpression() << right->evalExpression();
    }  


};
class RightShift : public Block {
private:
    BlockPtr left;
    BlockPtr right;
public:

    RightShift(BlockPtr _left, BlockPtr _right)
        : left(_left)
        , right(_right)
    {}
    ~RightShift() {
        delete left;
        delete right;
    }

    BlockPtr getLeft() const { return left; }
    BlockPtr getRight() const { return right; }

    virtual void print(std::ostream &dst) const override {
        dst << "Right shift: ";
        dst << " [ ";
        left->print(dst);
        dst << " >> ";
        right->print(dst);
        dst << " ] ";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);

        left->generateRISC(dst,context,destReg);  
        std::string reg = context.regs.nextFreeReg();
        // dst<<"DESTREG: "<<destReg<<" REG: "<<reg<<std::endl; /// HERE
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sra",destReg,destReg,reg);
        // context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() >> right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"slt",destReg,destReg,reg);
        Three_op(dst,"andi",destReg,destReg,"0xff");
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression() const override {
        return  left->evalExpression() < right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sgt",destReg,destReg,reg);
        Three_op(dst,"andi",destReg,destReg,"0xff");
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() > right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sgt",destReg,destReg,reg);
        Three_op(dst,"xori",destReg,destReg,"1");
        Three_op(dst,"andi",destReg,destReg,"0xff");
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() <= right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"slt",destReg,destReg,reg);
        Three_op(dst,"xori",destReg,destReg,"1");
        Three_op(dst,"andi",destReg,destReg,"0xff");
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

    }
    virtual int evalExpression()const override{
        return  left->evalExpression() >= right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sub",destReg,destReg,reg);
        Two_op(dst,"seqz",destReg,destReg);
        Three_op(dst,"andi",destReg,destReg,"0xff");
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() == right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"sub",destReg,destReg,reg);
        Two_op(dst,"sneqz",destReg,destReg);
        Three_op(dst,"andi",destReg,destReg,"0xff");
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }
    virtual int evalExpression()const override{
        return  left->evalExpression() != right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"andi",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() & right->evalExpression();
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"xori",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }
    
    virtual int evalExpression()const override{
        return  left->evalExpression() ^ right->evalExpression();
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
    
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        std::string reg = context.regs.nextFreeReg();
        context.regs.useReg(reg);
        right->generateRISC(dst,context,reg);
        Three_op(dst,"ori",destReg,destReg,reg);
        //context.regs.freeReg(destReg);
        context.regs.freeReg(reg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() | right->evalExpression();
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
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override{
        std::string l2 = context.make_label(".L");
        std::string l3 = context.make_label(".L");
    
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        Three_op(dst,"beq",destReg,"zero",l2);
        right->generateRISC(dst,context,destReg);
        Three_op(dst,"beq",destReg,"zero",l2);
        Two_op(dst,"li",destReg,"1");
        One_op(dst,"j",l3);
        label(dst,l2);
        Two_op(dst,"li",destReg,"0");
        label(dst,l3);
        //context.regs.freeReg(destReg);

    }

    virtual int evalExpression()const override{
        return  left->evalExpression() && right->evalExpression();  
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

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override{
        std::string l2 = context.make_label(".L");
        std::string l3 = context.make_label(".L");
        std::string l4 = context.make_label(".L");
        context.regs.useReg(destReg);
        left->generateRISC(dst,context,destReg);
        Three_op(dst,"bne",destReg,"zero",l2);
        right->generateRISC(dst,context,destReg);
        Three_op(dst,"beq",destReg,"zero",l3);
        label(dst,l2);
        Two_op(dst,"li",destReg,"1");
        One_op(dst,"j",l4);
        label(dst,l3);
        Two_op(dst,"li",destReg,"0");
        label(dst,l4);
        //context.regs.freeReg(destReg);
    }

    virtual int evalExpression()const override{
        return  left->evalExpression() || right->evalExpression(); 
    }  
};

#endif
