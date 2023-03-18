#ifndef ast_translation_unit_hpp
#define ast_translation_unit_hpp

#include "ast_block.hpp"

class TranslationUnit: public Block {
private:
    BlockPtr external_declaration;
    BlockPtr translation_unit;
public:
    TranslationUnit(BlockPtr _external_declaration, BlockPtr _translation_unit)
        : external_declaration(_external_declaration)
        , translation_unit(_translation_unit)
    {}
    ~TranslationUnit() {
        delete external_declaration;
        delete translation_unit;
    }

    virtual void print (std::ostream &dst) const override {
        translation_unit->print(dst);
        dst<<std::endl;
        external_declaration->print(dst);
    }
    
    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {
            translation_unit->generateRISC(dst,context,destReg);
            external_declaration->generateRISC(dst,context,destReg);
            context.regs.freeReg(destReg);
    }
};

#endif