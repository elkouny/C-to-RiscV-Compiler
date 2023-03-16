#ifndef ast_compound_statement_hpp
#define ast_compound_statement_hpp

#include "ast_block.hpp"

class Compound_Statement : public Block {
private:

    std::vector<BlockPtr> *dlist;
    std::vector<BlockPtr> *slist;

public:
    Compound_Statement(std::vector<BlockPtr> * _dlist, std::vector<BlockPtr> * _list) : dlist(_dlist), slist(_list) {}

    Compound_Statement(std::vector<BlockPtr> *_list) : slist(_list) {}

    ~Compound_Statement() {
        for (auto i : *slist){
            delete i;
        }
        delete slist;
        if (dlist != nullptr){
            for (auto i : *dlist){
                delete i;
            }
            delete dlist;
        }
    }

    // int getSize() {
    //     int size = 0;
    //     for (auto it : *slist){
    //         size += it->getSize();
    //     }
    // }

    std::vector<BlockPtr> getDec()  const { return *dlist; }
    std::vector<BlockPtr> getList() const { return *slist; }

    virtual void print(std::ostream &dst) const override {
        dst << "\n    Compound Statement [";
        if (dlist != nullptr) {
            dst << "\n    Declaration List [";
            for (auto i : *dlist){
                i->print(dst);
            }
            dst<<"\n    ]";
        }
        dst << "\n    Statement List [";
        for (auto i : *slist){
            i->print(dst);
        }
        dst<<"\n    ]";
        dst<<"\n    ]";
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
        try{
            context.newScope();
            int o;
            if (dlist){
                o=dlist->size() * -4 ;
            }
            else{
                o=0;
            }
            context.offset += o;
            // dst<<context.offset;

            Three_reg(dst,"addi","sp","sp",std::to_string(context.offset));
            // dst<<"sw ra, " << - 4 - context.offset << "(sp)" << std::endl;
            sw_lw(dst,"sw","ra",-4-context.offset,"sp");
            // dst<<"sw s0 " << - 8 - context.offset << "(sp)\n";
            sw_lw(dst,"sw","s0",-8-context.offset,"sp");
            // dst<<"addi s0,sp," <<  - 1 * context.offset << "\n";
            Three_reg(dst,"addi","s0","sp",std::to_string(-1*context.offset));

            if (dlist != nullptr) {
                for (auto i : *dlist){
                    i->generateRISC(dst, context, destReg);
                }
            }
            for (auto i : *slist){

                // std::string reg = context.regs.nextFreeReg();
                // context.regs.useReg("reg")
                i->generateRISC(dst, context, destReg);
                // context.regs.freeReg("reg")
            }
            // dst<<"lw s0," << - 8 - context.offset << "(sp)\n";
            sw_lw(dst,"lw","s0",-8-context.offset,"sp");
            // dst<<"addi sp,sp," << -1 * context.offset << "\n";
            Three_reg(dst,"addi","sp","sp",std::to_string(-1*context.offset));
            context.offset += (o * 4 );
            context.popScope();
        }
        catch (...) {
            dst<<"Error in Compound Statement";
        }

    }

};
#endif
