#ifndef ast_context_hpp
#define ast_contex_hpp

#include "ast_block.hpp"

struct Params{
    std::string reg;
    std::string type;
    int offset;

    Params (std::string _reg, std::string _type, int _offset) : reg(_reg), type(_type), offset(_offset) {}
};

struct Context{

    std::unordered_map<std::string,Params> bindings;

    Params findVar(std::string var){
        
    }

    void addContext (std::string _varname, std::string _type, int _offset){
        bindings[_varname] = Params(_varname , _type, _offset);
    }

    void DebugContext (std::ostream &dst) {
        dst<<"Bindings:\n";
        for (auto& it: bindings) {
            dst<<"var: [ "<< it.first<<" ] type: [ "<<it.second.type<<" ] offset [ "<<it.second.offset<<" ]\n";
        } 
    }
};

struct Registers{

    std::unordered_map<std::string,bool> reg_used;
    
    Registers () {   
        reg_used["zero"]=true; reg_used["ra"]=true;   reg_used["sp"]=true;   reg_used["gp"]=true;   
        reg_used["tp"]=true;   reg_used["t0"]=false;  reg_used["t1"]=false;  reg_used["t2"]=false;  
        reg_used["s0"]=true;   reg_used["s1"]=false;  reg_used["a0"]=true;   reg_used["a1"]=false;  
        reg_used["a2"]=false;  reg_used["a3"]=false;  reg_used["a4"]=false;  reg_used["a5"]=false;  
        reg_used["a6"]=false;  reg_used["a7"]=false;  reg_used["s2"]=false;  reg_used["s3"]=false;
        reg_used["s4"]=false;  reg_used["s5"]=false;  reg_used["s6"]=false;  reg_used["s7"]=false;  
        reg_used["s8"]=false;  reg_used["s9"]=false;  reg_used["s10"]=false; reg_used["s11"]=false; 
        reg_used["t3"]=false;  reg_used["t4"]=false;  reg_used["t5"]=false;  reg_used["t6"]=false;  
    }

    std::string nextFreeReg(){
        for (auto& it : reg_used) {
            if (it.second == false) {
                return it.first;
            }
        }
        return "-1";
    }

    void useReg(std::string reg){
        reg_used[reg] = true;        
    }
    
    void freeReg(std::string reg){
        reg_used[reg] = false;        
    }

    void showRegUsed(std::ostream &dst) {
        for (auto& it : reg_used) {
                dst<<it.first << ": " << it.second << "\n";
            }
    }
};

struct Scope{
    Context Globalscope;
    std::vector<Context> scope;
    Registers regs;
    
    Scope () {
        regs = Registers();
    }

    Params getVarInfo (std::string var) {
        for ( int i = 0; i < scope.size() ; i++){
            if (scope[i].findVar(var) != -1 ){
                return
            }
        }
    }

    void addGlobal(std::string var, Params varinfo) {
        Globalscope.bindings[var] = varinfo;
    }   

    void addScope(Context _context) {
        scope.push_back(_context);
    }

    void popScope() {
        scope.pop_back();
    }

    void DebugScope(std::ostream &dst) {
        for (int i = scope.size()-1; i>-1; i--){
            dst<<"Scope Level "<< i << ":\n";
            scope[i].DebugContext(dst);
        } 
    } 
};

#endif