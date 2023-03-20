#ifndef ast_array_expression_hpp
#define ast_array_expression_hpp

#include "ast_block.hpp"

class ArrayExpression : public Block {
private:

    BlockPtr array;
    BlockPtr index;

public:
    ArrayExpression(BlockPtr _array, BlockPtr _index)
        : array(_array)
        , index(_index)
    {}

    ~ArrayExpression() {
        delete array;
        delete index;

    }

    virtual int isArray() const override { return 1; }

    virtual std::string getIdentifier() const override {
        return array->getIdentifier();
    }

    virtual int evalExpression() const override {
        return index->evalExpression();
    }

    virtual BlockPtr getIndex() const override {
        return index;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<" Array Expression [ Array [ ";
        array->print(dst);
        dst<<" ] Index [ ";
        index->print(dst);
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string arrayname = getIdentifier();
        // int arrayindex = evalExpression();

        std::string ireg = context.regs.nextFreeReg();
        context.regs.useReg(ireg);
        index->generateRISC(dst,context,ireg);
        std::string reg4 = context.regs.nextFreeReg();

        int offset = context.getVarInfo(arrayname+"[0]").offset;
        if (offset==0){
            lui(dst,"lui",destReg,"%%hi",arrayname);
            addi(dst,"addi",destReg,destReg,"%%lo",arrayname);
            Two_op(dst,"li",reg4,"4");
            Three_op(dst,"mul",ireg,ireg,reg4);
            Three_op(dst,"add",ireg,ireg,destReg);
            sw_lw(dst,"lw",destReg,0,ireg);
        }
        else{
            context.regs.useReg(reg4);
            std::string oreg = context.regs.nextFreeReg();
            Two_op(dst,"li",reg4,"4");
            Three_op(dst,"mul",ireg,ireg,reg4);
            Two_op(dst,"li",oreg,std::to_string(offset));
            Three_op(dst,"sub",ireg,oreg,ireg);
            Three_op(dst,"add",ireg,ireg,"s0");
            sw_lw(dst,"lw",destReg,0,ireg);
        }
        context.regs.freeReg(ireg);
        context.regs.freeReg(reg4);
    }
};

#endif
