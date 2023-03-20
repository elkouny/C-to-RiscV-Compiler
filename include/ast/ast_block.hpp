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

    virtual int isArray() const { return 0; }

    virtual int isFunction() const { return 0; }

    // virtual int initSize() const { return 0; }

    virtual int evalExpression() const { return 0; }
    // virtual int evalExpression() const { return -1 };
    virtual BlockPtr getIndex() const { return nullptr; }
    
    virtual BlockPtr getDeclarator() const { return nullptr; }

    virtual std::string getIdentifier() const { return "error "; }

    virtual std::vector<BlockPtr> getDec() const {std::vector<BlockPtr> declarations; return declarations;}

    virtual std::vector<BlockPtr> getList() const  { std::vector<BlockPtr> declarations; return declarations; }
};

#endif