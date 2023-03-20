#ifndef ast_hpp
#define ast_hpp
#include "ast/ast_block.hpp"
#include "ast/ast_function.hpp"
#include "ast/ast_declarator.hpp"
#include "ast/ast_expression.hpp"
#include "ast/ast_declaration.hpp"
#include "ast/ast_init_declarator.hpp"
#include "ast/ast_compound_statement.hpp"
#include "ast/ast_jump_statement.hpp"
#include "ast/ast_assignment.hpp"
#include "ast/ast_arithmetic_and_logic.hpp"
#include "ast/ast_selection_statement.hpp"
#include "ast/ast_while.hpp"
#include "ast/ast_function_call.hpp"
#include "ast/ast_translation_unit.hpp"
#include "ast/ast_function_declarator.hpp"
#include "ast/ast_parameter_declaration.hpp"
#include "ast/ast_for.hpp"
#include "ast/ast_init_array.hpp"
#include "ast/ast_array_declarator.hpp"
#include "ast/ast_array_expression.hpp"
#include "ast/ast_for.hpp"


extern const Block *parseAST();

#endif
