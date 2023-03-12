#ifndef ast_init_declarator_list_hpp
#define ast_init_declarator_list_hpp
#include "ast_block.hpp"

class Init_Declarator_List : public Block {
private:
    BlockPtr head;
    BlockPtr list;
public:
    Init_Declarator_List(BlockPtr _head, BlockPtr _list)
        : head(_head)
        , list(_list)
    {}
    Init_Declarator_List(BlockPtr _head)
        : head(_head)
        , list(nullptr)
    {}
    ~Init_Declarator_List() {
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
            dst << ", ";
            list->print(dst);
        }
    }
};
#endif