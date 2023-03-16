#ifndef ast_hpp
#define ast_hpp

#include "ast/ast_block.hpp"
#include "ast/ast_function.hpp"
#include "ast/ast_declarator.hpp"
#include "ast/ast_expression.hpp"
#include "ast/ast_declaration.hpp"
#include "ast/ast_init_declarator.hpp"
// #include "ast/ast_operators.hpp"
#include "ast/ast_compound_statement.hpp"
#include "ast/ast_jump_statement.hpp"
// #include "ast/ast_structs.hpp"
#include "ast/ast_assignment.hpp"
#include "ast/ast_arithmetic_and_logic.hpp"
#include "ast/ast_selection_statement.hpp"
#include "ast/ast_iteration_statement.hpp"

extern const Block *parseAST();

// struct ContextType
// {
//     std::map<
// };

#endif
