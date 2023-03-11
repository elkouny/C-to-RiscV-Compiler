#ifndef ast_list_hpp
#define ast_list_hpp

#include "ast_block.hpp"

class List : public Block {
private:

    
    BlockPtr head;
    BlockPtr list;

// protected:
public:
    
    List(BlockPtr _head, BlockPtr _list)
        : head(_head)
        , list(_list)
    {}
    List(BlockPtr _head)
        : head(_head)
        , list(nullptr)
    {}
    ~List() {
        delete head;
        if (list != nullptr){
            delete list;
        }
    }

    BlockPtr getHead() const { return head; }
    BlockPtr getList() const { return list; }

    virtual void print(std::ostream &dst) const override {
        head->print(dst);
        if (list != nullptr) {
            dst << std::endl;
            list->print(dst);
        }
    }


    virtual void evaluate(std::ostream &dst) const override {
        head->evaluate(dst);
        if (list != nullptr) {
            dst << std::endl;
            list->evaluate(dst);
        }
    }    

    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     head->generateRISC(dst, context, destReg);
    //     if (list != nullptr) {
    //         list->generateRISC(dst, context, destReg);
    //     }
    // }
};

#endif