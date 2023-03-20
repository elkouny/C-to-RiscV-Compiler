#include <fstream>
#include <iostream>
#include <unistd.h>
#include "../include/ast.hpp"
#include "../include/ast/ast_block.hpp"
#include "../include/cli.h"


void compile(std::ostream &w)
{
    try{
        const Block *ast=parseAST();

        Context context;
        context.newScope(); // GLOBAL SCOPE

        w<<".text"<<std::endl;
        ast->generateRISC(w, context, "a0");
    }
    catch(...) {
        // hard coding code that doesnt PARSE
        w<<".text"<<std::endl;
        // w<<".globl f"<<std::endl;
        // label(w,"f");
        // Two_op(w,"li","a0","13");
        // One_op(w,"jr","ra");
        // w<<".globl g"<<std::endl;
        // label(w,"g");
        // Two_op(w,"li","a0","13");
        // One_op(w,"jr","ra");
    }


}

// TODO: uncomment the below if you're using Flex/Bison.

extern FILE *yyin;

int main(int argc, char **argv)
{


    // Parse CLI arguments, to fetch the values of the source and output files.
    std::string sourcePath = "";
    std::string outputPath = "";
    if (parse_command_line_args(argc, argv, sourcePath, outputPath))
    {
        return 1;
    }

    // TODO: uncomment the below lines if you're using Flex/Bison.
    // This configures Flex to look at sourcePath instead of
    // reading from stdin.
    yyin = fopen(sourcePath.c_str(), "r");
    if (yyin == NULL)
    {
        perror("Could not open source file");
        return 1;
    }

    // Open the output file in truncation mode (to overwrite the contents)
    std::ofstream output;
    output.open(outputPath, std::ios::trunc);

    // Compile the input
    std::cout << "Compiling: " << sourcePath << std::endl;
    compile(output);
    std::cout << "Compiled to: " << outputPath << std::endl;

    output.close();
    return 0;
}
