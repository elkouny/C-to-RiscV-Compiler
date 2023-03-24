#ifndef ast_enum_hpp
#define ast_enum_hpp

#include "ast_block.hpp"

class Enumerator : public Block
{
private:
    std::string IDENTIFIER;
    BlockPtr value;
// protected:
public:
    Enumerator(std::string I) : IDENTIFIER(I) , value(nullptr) {}
    Enumerator(std::string I, BlockPtr v ) : IDENTIFIER(I), value(v) {}

    ~Enumerator() {
        if(value!=nullptr){
            delete value;
        }
    };

 
    std::string getEnumIden() const override {
        return IDENTIFIER;
    }

    BlockPtr getEnumVal() const override {
        if(value!=nullptr){
            return value;
        }
        else{
            return nullptr;
        }
    }
   
};

class EnumSpecifier : public Block
{
private:
    
    std::vector <BlockPtr> *enumlist;
// protected:
public:
    EnumSpecifier(std::vector <BlockPtr> *e) : enumlist(e) {}


    ~EnumSpecifier() {
        if (enumlist != nullptr){
            for (auto i : *enumlist){
                delete i;
            }
            delete enumlist;
        }
    };

 virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override {

    if(enumlist!=nullptr){
        int x = 0;
        std::string var;
        int val;
        for (auto i : *enumlist){
                var = i->getEnumIden();
                if(i->getEnumVal()!=nullptr){
                    val=i->getEnumVal()->evalExpression();
                }
                else{
                    val=x;
                }
                context.addEnum(var,val);
                x++;
            }
            

    }

 }
   
};




#endif
