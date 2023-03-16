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
        std::string varname = value->getVar();
        std::string reg = context.regs.nextFreeReg();
        int offset = context.getVarInfo(varname).offset;
        // dst<< "VARNAME: " << varname << " OFFSET: " << offset << "\n";
        // context.debugScope(dst);
        context.regs.useReg(reg);
        value->generateRISC(dst,context,reg);
        // dst<<"addi " << reg << " , " << "1";
        Two_reg(dst,"addi",reg,"1");
        // dst << "\nsw " << reg << ", " << offset << "(s0)" << std::endl;
        sw_lw(dst,"sw",reg,offset,"s0");
        context.regs.freeReg(reg);
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
        std::string var = value->getVar();
        value->generateRISC(dst,context,reg);
        int off = context.getVarInfo(var).offset;

        // dst<<"addi " << reg << " , " << " -1 ";
        Two_reg(dst,"addi",reg,"-1");
        // dst <<"\nsw " << reg << " , " << off << "(s0)";
        sw_lw(dst,"sw",reg,off,"s0");
        context.regs.freeReg(reg);
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
        // dst<<"mul " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"mul",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"div " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"div",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"add " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"add",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"sub " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"sub",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"slt " << destReg << " , " << destReg << " , "<< reg;
        // dst<<"\nandi " << destReg << " , "<< destReg << " , 0xff";
        Three_reg(dst,"slt",destReg,destReg,reg);
        Three_reg(dst,"andi",destReg,destReg,"0xff");
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"sgt" << destReg << " , " << destReg << " , "<< reg;
        // dst <<"\nandi" << destReg << " , " << destReg << " , "<< "0xff";
        Three_reg(dst,"sgt",destReg,destReg,reg);
        Three_reg(dst,"andi",destReg,destReg,"0xff");
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"sgt " << destReg << " , " << destReg << " , "<< reg;
        // dst<<"\nxori " << destReg << " , " << destReg << " ,1";
        // dst<<"\nandi " << destReg << " , " << destReg << " ,0xff";
        Three_reg(dst,"sgt",destReg,destReg,reg);
        Three_reg(dst,"xori",destReg,destReg,"1");
        Three_reg(dst,"andi",destReg,destReg,"0xff");

        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"slt " << destReg << " , " << destReg << " , "<< reg;
        // dst<<"\nxori " << destReg << " , " << destReg << " ,1";
        // dst<<"\nandi " << destReg << " , " << destReg << " ,0xff";
        Three_reg(dst,"slt",destReg,destReg,reg);
        Three_reg(dst,"xori",destReg,destReg,"1");
        Three_reg(dst,"andi",destReg,destReg,"0xff");
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"sub " << destReg << " , " << destReg << " , "<< reg;
        // dst<<"\nseqz " << destReg << " , " << destReg;
        // dst<<"\nandi " << destReg << " , " << destReg << " ,0xff";
        Three_reg(dst,"sub",destReg,destReg,reg);
        Two_reg(dst,"seqz",destReg,destReg);
        Three_reg(dst,"andi",destReg,destReg,"0xff");
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"sub " << destReg << " , " << destReg << " , "<< reg;
        // dst<<"\nsnez " << destReg << destReg;
        // dst<<"\nandi " << destReg << " , " << destReg << " ,0xff";
        Three_reg(dst,"sub",destReg,destReg,reg);
        Two_reg(dst,"sneqz",destReg,destReg);
        Three_reg(dst,"andi",destReg,destReg,"0xff");
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"andi " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"andi",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"xori " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"xori",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
        // dst<<"ori " << destReg << " , " << destReg << " , "<< reg;
        Three_reg(dst,"ori",destReg,destReg,reg);
        context.regs.freeReg(destReg);
        context.regs.freeReg(reg);

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
