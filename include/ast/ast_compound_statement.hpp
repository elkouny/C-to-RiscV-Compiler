#ifndef ast_compound_statement_hpp
#define ast_compound_statement_hpp

#include "ast_block.hpp"

class Compound_Statement : public Block
{
private:
    std::vector<BlockPtr> *dlist;
    std::vector<BlockPtr> *slist;

public:
    Compound_Statement(std::vector<BlockPtr> *_dlist, std::vector<BlockPtr> *_list) : dlist(_dlist), slist(_list) {}

    Compound_Statement(std::vector<BlockPtr> *_list, std::string list_type)
    {
        // slist =_list;
        if (list_type == "dlist")
        {
            dlist = _list;
            slist = nullptr;
        }
        else
        {
            dlist = nullptr;
            slist = _list;
        }
    }

    ~Compound_Statement()
    {
        // for (auto i : *slist){
        //     delete i;
        // }
        if (slist != nullptr)
        {
            for (auto i : *slist)
            {
                delete i;
            }
            delete slist;
        }
        if (dlist != nullptr)
        {
            for (auto i : *dlist)
            {
                delete i;
            }
            delete dlist;
        }
    }

    std::vector<BlockPtr> getDec() const override
    {
        if (dlist != nullptr)
        {
            return *dlist;
        }
        else
        {
            std::vector<BlockPtr> empty;
            return empty;
        }
    }

    std::vector<BlockPtr> getList() const override
    {
        if (slist != nullptr)
        {
            return *slist;
        }
        else
        {
            std::vector<BlockPtr> empty;
            return empty;
        }
    }

    virtual void print(std::ostream &dst) const override
    {
        dst << "\n    Compound Statement [";
        if (dlist != nullptr)
        {
            dst << "\n    Declaration List [";
            for (auto i : *dlist)
            {
                i->print(dst);
            }
            dst << "\n    ]";
        }
        if (slist != nullptr)
        {
            dst << "\n    Statement List [";
            for (auto i : *slist)
            {
                i->print(dst);
            }
            dst << "\n    ]";
            dst << "\n    ]";
        }
    }

    virtual void generateRISC(std::ostream &dst, Context &context, std::string destReg) const override
    {
        // dst<<"here";
        if (context.is_function)
        {
            context.is_function = 0;
        }
        else
        {
            context.newScope();
        }

        if (dlist != nullptr)
        {
            for (auto i : *dlist)
            {
                i->generateRISC(dst, context, destReg);
            }
        }

        if (slist != nullptr)
        {
            for (auto i : *slist)
            {
                i->generateRISC(dst, context, destReg);
            }
        }
        // context.debugScope(dst);
        context.popScope();
    }
};
#endif
