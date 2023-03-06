#include "../include/cli.h"

int main()
{
    const Expression *ast=parseAST();

    ast->print(std::cout);
    std::cout<<std::endl;

    return 0;
}