#ifndef ast_compound_statement_hpp
#define ast_compound_statement_hpp

#include "ast_block.hpp"

class Compound_Statement : public Block {
private:
    BlockPtr head;
    BlockPtr list;
public:
    Compound_Statement(BlockPtr _head, BlockPtr _list) : head(_head), list(_list) {}
    Compound_Statement(BlockPtr _head) : head(_head) {}
    ~Compound_Statement() {
        delete head;
        if (list != nullptr) {
            delete list;
        }
    }

    virtual void print(std::ostream &dst) const override {
    
        head->print(dst);
        if (list != nullptr) {
            list->print(dst);
        }
  
    }
    
};
