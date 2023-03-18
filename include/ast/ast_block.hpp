#ifndef ast_block_hpp
#define ast_block_hpp


#include "ast_structs.hpp"



class Block;

typedef const Block *BlockPtr;

class Block {
// private:
//     BlockPtr translation_unit;
public:
    virtual ~Block() {}
    //! Tell and expression to print itself to the given stream
    virtual void print(std::ostream &dst) const =0;



    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const {};


    virtual std::string getVar() const { return "error"; }

    virtual std::string getIdentifier() const { return "error "; }

    virtual std::vector<BlockPtr> getDec() const {std::vector<BlockPtr> declarations; return declarations;}

    virtual std::vector<BlockPtr> getList() const  { std::vector<BlockPtr> declarations; return declarations; }
    // virtual int getConstant() const { return -1 }; 
};


#endif