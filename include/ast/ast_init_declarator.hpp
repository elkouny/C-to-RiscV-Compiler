#ifndef ast_init_declarator_hpp
#define ast_init_declarator_hpp
#include "ast_block.hpp"

class Init_Declarator : public Block {
private:
    BlockPtr declarator;
    BlockPtr initializer;
public:
    Init_Declarator(BlockPtr _declarator, BlockPtr _initializer)
        : declarator(_declarator)
        , initializer(_initializer)
    {}
    Init_Declarator(BlockPtr _declarator)
        : declarator(_declarator)
        , initializer(nullptr)
    {}
    ~Init_Declarator() {
        delete declarator;
        if (initializer != nullptr){
            delete initializer;
        }
    }

    BlockPtr getDeclarator() const { return declarator; }
    BlockPtr getInitializer() const { return initializer; }

    virtual void print(std::ostream &dst) const override {
        dst<<"Variable Name: [ ";
        declarator->print(dst);
        dst<<" ] ";
        if (initializer != nullptr) {
            dst << "Variable assignment[ ";
            dst << " = ";
            dst <<"Variable Value[ ";
            initializer->print(dst);
            dst<<" ] ";
            dst<<" ] ";
        }
    }
//     virtual void print(std::ostream &dst, unsigned indentLevel = 0) const override {
//         std::string indent(indentLevel * 4, ' ');
//         dst << indent << "Init_Declarator: " << std::endl;
//         dst << indent << "├─ Declarator: " << std::endl;
//         declarator->print(dst, indentLevel + 1);
//         if (initializer != nullptr) {
//             dst << indent << "└─ Initializer: " << std::endl;
//             initializer->print(dst, indentLevel + 1);
//         } else {
//             dst << indent << "└─ (No Initializer)" << std::endl;
//         }
// }



    // virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     declarator->generateRISC(dst, context, destReg);
    //     dst << " = ";
    //     initializer->generateRISC(dst, context, destReg);
    // }
};
#endif