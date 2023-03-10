#include "../include/ast.hpp"

int main()
{
    const Block *ast=parseAST();

    ast->print(std::cout);
    std::cout<<std::endl;

    return 0;
}