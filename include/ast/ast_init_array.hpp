#ifndef ast__init_array_hpp
#define ast_init_array_hpp

#include "ast_block.hpp"

class ArrayInitializer : public Block {
private:
    std::vector<BlockPtr> *vals;
public:
    ArrayInitializer(std::vector<BlockPtr> *_vals)
        : vals(_vals)
    {}

    ~ArrayInitializer() {
        for (auto i : *vals){
            delete i;
        }
    }

    virtual int isArray() const override { return 1; }

    // virtual int initSize() const override { vals->size(); }

    virtual std::vector<BlockPtr> getList() const override { return *vals; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n    Value List [";
        for (auto i : *vals){
            i->print(dst);
        }
        dst<<"\n    ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {}
};

#endif
