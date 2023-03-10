#include "../include/ast.hpp"

int main()
{
    const Block *ast=parseAST();

    ast->evaluate(std::cerr);
    std::cerr<<std::endl;
    ast->print(std::cout);
    std::cout<<std::endl;

    return 0;
}