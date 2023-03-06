#ifndef ast_block_hpp
#define ast_block_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>

#include <memory>

class Block;

typedef const Block *BlockPtr;

class Block
{
private:
    std::vector<BlockPtr> children;
public:
    virtual ~Block()
    {}

    //! Tell and expression to print itself to the given stream
    virtual void print(std::ostream &dst) const =0;

    //! Evaluate the tree using the given mapping of variables to numbers
    virtual double evaluate(
        const std::map<std::string,double> &bindings
    ) const
    { throw std::runtime_error("Not implemented."); }
};


#endif