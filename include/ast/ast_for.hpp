#ifndef ast_for_hpp
#define ast_for_hpp

#include "ast_block.hpp"

class For: public Block {
private:
    BlockPtr initializer;
    BlockPtr condition;
    BlockPtr increment;
    BlockPtr cstatement;
public:
    For(BlockPtr _initializer, BlockPtr _condition , BlockPtr _increment,BlockPtr _cstatement)
        : initializer(_initializer)
        , condition(_condition)
        , increment(_increment)
        , cstatement(_cstatement)
    {}
    For(BlockPtr _condition , BlockPtr _increment,BlockPtr _cstatement)
        : initializer(nullptr)
        , condition(_condition)
        , increment(_increment)
        , cstatement(_cstatement)
    {}
    ~For() {
        if(condition!=nullptr){
            delete condition;
        }
        delete condition;
        delete increment;
        delete cstatement;
    }
    virtual void print (std::ostream &dst) const override {
        dst << "\n    FOR [ ";
        if(initializer!=nullptr){
            dst << "\n    Initial value [ ";
            initializer->print(dst);
            dst << " ]";
        }
        dst << "\n    condition [ ";
        condition->print(dst);
        dst << " ]";
        dst << "\n    Increment [ ";
        increment->print(dst);
        dst << " ]";
        dst << " ]\n    Loop [ ";
        cstatement->print(dst);
        dst << " ]";
    }
    
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        if(initializer!=nullptr){
            initializer->generateRISC(dst,context,destReg);
        }
        std::string startf = context.make_label("startf");
        std::string endf = context.make_label("endf");
        std::string loopf = context.make_label("loopf");
        std::string continuef = context.make_label("continuef");
        context.addLoopLabel(continuef,endf);
        label(dst,startf);
        condition->generateRISC(dst,context,destReg);
        Three_op(dst,"beq",destReg,"zero",endf);
        label(dst,loopf);
        cstatement->generateRISC(dst,context,destReg);
        label(dst,continuef);
        increment->generateRISC(dst,context,destReg);
        Three_op(dst,"beq","zero","zero",startf);
        label(dst,endf);
        if(context.getCurrentLoopBegin() == startf){        
            context.popLoopLabel();
        }
    }
};

#endif