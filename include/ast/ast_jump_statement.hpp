#ifndef ast_jump_statement_hpp
#define ast_jump_statement_hpp

#include "ast_block.hpp"

class JumpStatement : public Block {
private:
    std::string type;
    BlockPtr expression;
public:
    JumpStatement(std::string _type, BlockPtr _expression)
        : type(_type)
        , expression(_expression)
    {}

    JumpStatement(std::string _type)
        : type(_type)
    {}

    ~JumpStatement() {
        if (expression!=nullptr) {
            delete expression;
        }
    }

    std::string getType() const { return type; }
    BlockPtr getExpression() const { return expression; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n        Jump Statement [ ";
        dst << type << " ] ";
        if (expression!=nullptr) {
            getExpression()->print(dst);
        }
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if (type == "return") {
            if (expression != nullptr){
                expression->generateRISC(dst, context,"t6");
            }
            One_op(dst,"j",context.ret_label);
        }
        if (type == "break") {
            One_op(dst,"j",context.getCurrentLoopEnd());
            // context.popLoopLabel();
        }
        if (type == "continue") {
            One_op(dst,"j",context.getCurrentLoopBegin());
        }
    }

};
#endif
