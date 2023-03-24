// // // // // // // #include "../../include/ast.hpp"
// // // // // // // #include "../../include/ast/ast_structs.hpp"
// // // // // // // 
// // // // // // // int main()
// // // // // // // {
// // // // // // //     const Block *ast=parseAST();
// // // // // // //     Context context;
// // // // // // //     context.newScope(); // GLOBAL SCOPE
// // // // // // // 
// // // // // // //     ast->print(std::cout);
// // // // // // //     std::cout<<std::endl;
// // // // // // // 
// // // // // // //     std::cerr<<".text"<<std::endl;
// // // // // // //     ast->generateRISC(std::cerr, context, "a0");
// // // // // // //     std::cerr<<std::endl;
// // // // // // // 
// // // // // // //     return 0;
// // // // // // // }
