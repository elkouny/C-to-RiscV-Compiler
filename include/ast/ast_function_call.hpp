#ifndef ast_function_call_hpp
#define ast_function_call_hpp

#include "ast_block.hpp"

class FunctionCall : public Block
{
private:
    BlockPtr function;
    std::vector<BlockPtr> *argList;
public:
    FunctionCall(BlockPtr _function) {
        function = _function;
        // std::vector<BlockPtr> *empty;
        // argList = empty;
    }

    FunctionCall(BlockPtr _function, std::vector<BlockPtr> *_argList) {
        function = _function;
        argList = _argList;
    }

    ~FunctionCall() {
        delete function;
        if ( argList != nullptr ) {
            for (auto i : *argList){
                delete i;
            }
        }
    };

    

    virtual void print(std::ostream &dst) const override {
        dst<<" FunctionCall [ Function [ ";
        function->print(dst);
        dst<<" ] Args [ ";
        if ( argList != nullptr ) {
            for (auto arg : *argList){
                arg->print(dst);
            }
        }
        dst<<" ] ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        std::string func_name = function->getVar();
        if ( argList != nullptr) {
            int index = 0;
            for (auto arg : *argList){
                arg->generateRISC(dst,context,("a"+std::to_string(index)));
                index++;
            } 

        }
        One_op(dst,"call",func_name);
        Two_op(dst,"mv",destReg,"a0");
    }
};

#endif
