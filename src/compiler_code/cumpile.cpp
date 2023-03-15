#include "ast.hpp"

int main()
{
    const Block *ast=parseAST();

    ast->generateRISC(std::cout);
    std::cout<<std::endl;
 

    return 0;
}
