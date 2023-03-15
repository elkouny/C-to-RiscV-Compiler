#include "../include/ast.hpp"

int main()
{
    const Block *ast=parseAST();

    ast->print(std::cout);
    std::cout<<std::endl;
    // ast->generateRISC(std::cerr, scope, 5);
    
    // ast->evaluate(std::cerr);
    // std::cerr<<std::endl;

    return 0;
}