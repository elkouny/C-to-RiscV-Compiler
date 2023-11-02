#ifndef ast_selection_statement_hpp
#define ast_selection_statement_hpp

#include "ast_block.hpp"

class IfElse : public Block
{
private:
    BlockPtr expression;
    BlockPtr statement;
    BlockPtr else_statement;

public:
    IfElse(BlockPtr _expression, BlockPtr _statement, BlockPtr _else_statement)
        : expression(_expression), statement(_statement), else_statement(_else_statement)
    {
    }
    IfElse(BlockPtr _expression, BlockPtr _statement)
        : expression(_expression), statement(_statement), else_statement(nullptr)
    {
    }
    ~IfElse()
    {
        delete expression;
        delete statement;
        delete else_statement;
    }
    virtual void print(std::ostream &dst) const override
    {
        dst << "\n    IF [ ";
        expression->print(dst);
        dst << " ]";
        statement->print(dst);
        if (else_statement != nullptr)
        {
            dst << "\n    Else [ ";
            else_statement->print(dst);
            dst << " ]";
        }
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override
    {
        std::string l2 = make_label(".L");
        std::string l3 = make_label(".L");
        context.regs.useReg(destReg);
        expression->generateRISC(dst, context, destReg);
        Three_op(dst, "beq", destReg, "zero", l2);
        statement->generateRISC(dst, context, destReg);
        if (else_statement != nullptr)
        {
            One_op(dst, "j", l3);
            label(dst, l2);
            else_statement->generateRISC(dst, context, destReg);
            label(dst, l3);
        }
        else
        {
            label(dst, l2);
        }
        context.regs.freeReg(destReg);
    }
};

class Switch : public Block
{
private:
    BlockPtr expression;
    BlockPtr statement;

public:
    Switch(BlockPtr _expression, BlockPtr _statement)
        : expression(_expression), statement(_statement)
    {
    }

    ~Switch()
    {
        delete expression;
        delete statement;
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override
    {
        std::string r1 = context.regs.nextFreeReg();
        context.regs.useReg(r1);
        context.caseRegs.push_back(r1);
        std::string r2 = context.regs.nextFreeReg();
        context.regs.useReg(r2);
        std::string start_switch = make_label("startswitch");
        std::string end_switch = make_label("endswitch");
        context.addLoopLabel(start_switch, end_switch);
        label(dst, start_switch);
        expression->generateRISC(dst, context, r1);
        statement->generateRISC(dst, context, r2);
        label(dst, end_switch);
        context.regs.freeReg(r1);
        context.regs.freeReg(r2);
        context.caseRegs.pop_back();
        if (context.getCurrentLoopBegin() == start_switch)
        {
            context.popLoopLabel();
        }
    }
};

class Case : public Block
{
private:
    BlockPtr const_expr;
    BlockPtr statements;

public:
    Case(BlockPtr ce, BlockPtr s) : const_expr(ce), statements(s) {}

    Case(BlockPtr s)
    {
        const_expr = nullptr;
        statements = s;
    }
    ~Case()
    {
        if (const_expr != nullptr)
            delete const_expr;
        delete statements;
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override
    {
        if (const_expr == nullptr)
        {
            // DEFAULT :Statement
            std::string regD = context.regs.nextFreeReg();
            context.regs.useReg(regD);
            statements->generateRISC(dst, context, regD);
            context.regs.freeReg(regD);
        }
        else
        {
            // Case number : Statement
            std::string reg = context.regs.nextFreeReg();
            context.regs.useReg(reg);
            std::string expression_reg = context.regs.nextFreeReg();
            context.regs.useReg(expression_reg);
            const_expr->generateRISC(dst, context, reg);
            std::string end = make_label("end");
            Three_op(dst, "bne", reg, context.caseRegs.back(), end);
            statements->generateRISC(dst, context, expression_reg);
            label(dst, end);
            context.regs.freeReg(reg);
            context.regs.freeReg(expression_reg);
        }
    }
};

#endif