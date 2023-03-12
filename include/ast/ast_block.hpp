#ifndef ast_block_hpp
#define ast_block_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>

#include <memory>

class Block;

typedef const Block *BlockPtr;

class Block {
// private:
//     BlockPtr translation_unit;
public:
    // Block(const BlockPtr &_tu) : translation_unit(_tu) {}
    
    virtual ~Block() {}

    //! Tell and expression to print itself to the given stream
    virtual void print(std::ostream &dst) const =0;

    //! Evaluate the tree using the given mapping of variables to numbers
    virtual void evaluate(std::ostream &dst) const { 
        throw std::runtime_error("Not implemented."); 
    }

    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const {
    //     throw std::runtime_error("Not implemented."); 
    // }
    // virtual std::string getIdentifier() const {}

    // virtual int getConstant() const {}  
};


#endif