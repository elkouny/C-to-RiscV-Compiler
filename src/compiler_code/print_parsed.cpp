#include "../include/ast.hpp"
#include "../include/ast/ast_structs.hpp"

int main()
{
    const Block *ast=parseAST();
    Context context;
    // ast->generateRISC(std::cout, context, "a0");

    ast->print(std::cout);
    std::cout<<std::endl;
    ast->generateRISC(std::cerr, context, "a0");
    std::cerr<<std::endl;
    
    // ast->evaluate(std::cerr);
    

    return 0;
}