#ifndef ast_compound_statement_hpp
#define ast_compound_statement_hpp

#include "ast_block.hpp"

class Compound_Statement : public Block {
private:
    BlockPtr declaration;
    std::vector<BlockPtr> *slist;
public:
    Compound_Statement(BlockPtr _declaration, std::vector<BlockPtr> * _list) : declaration(_declaration), slist(_list) {}
    Compound_Statement(std::vector<BlockPtr> *_list) : slist(_list) {}
    ~Compound_Statement() {
        for (auto i : *slist){
            delete i;
        }
        delete slist;
        if (declaration != nullptr) {
            delete declaration;
        }
    }

    BlockPtr getDec() const { return declaration; }
    std::vector<BlockPtr> getList() const { return *slist; }

    virtual void print(std::ostream &dst) const override {
        dst << "    Compound Statement [";
        if (declaration != nullptr) {
            getDec()->print(dst);
        }
        for (auto i : *slist){
            i->print(dst);
        }
        dst<<"\n    ]";
    }
    
    virtual void evaluate(std::ostream &dst) const override {
        for (auto i : *slist){
            i->evaluate(dst);
        }
        if (declaration != nullptr) {
            dst << std::endl;
            getDec()->evaluate(dst);
        }
    }    
};
#endif
