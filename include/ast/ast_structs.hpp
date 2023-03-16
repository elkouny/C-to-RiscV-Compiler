#ifndef ast_structs_hpp
#define ast_structs_hpp
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <unordered_map>

#include <memory>

struct Params{
    std::string type;
    int offset;

    Params () {
        type = "0";
        offset = 0;
    }

    Params ( std::string _type, int _offset) {
        type = _type;
        offset= _offset;
    }
};

struct VarMap{

    std::unordered_map<std::string,Params> bindings;

    bool findVar(std::string var){
        if (bindings.find(var) == bindings.end()){
            return false;
        }
        return true;
    }

    Params getParams(std::string var){
        return bindings[var];
    }

    int getCurrentOffset(){
        int offset = -16;
        for (auto& it: bindings) {
            if (it.second.offset < offset) {
                offset = it.second.offset;
            }
        }
        return offset;
    }

    void addVar (std::string _varname, std::string _type, int _offset){
        bindings[_varname] = Params(_type, _offset);
    }

    void addVar (std::string _varname,Params params){
        bindings[_varname] = params;
    }

    void updateOffset (std::string _varname, int _offset){
        bindings[_varname].offset = _offset;
    }

    void DebugVars (std::ostream &dst) {
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

struct Context{

    std::vector<VarMap> scope;
    Registers regs;
    int offset = -20;

    std::string make_label (std::string label){
        static int unique = 0 ;
        return label + std::to_string(unique++);
    }

    Params getVarInfo (std::string var) {
        for ( int i = scope.size()-1; i > -1 ; i--){
            if (scope[i].findVar(var)){
                return scope[i].getParams(var);
            }
        }
        Params error = Params("0",0);
        return error;
    }

    void addGlobal(std::string var, Params varinfo) {
        scope[0].addVar(var, varinfo);
    }

    void addVar (std::string _varname, std::string _type, int _offset){
        scope[scope.size()-1].bindings[_varname] = Params(_type, _offset);
    }

    void addVar(std::string var, Params varinfo) {
        scope.back().addVar(var, varinfo);
    }

    void newScope() {
        VarMap _vars;
        scope.push_back(_vars);
    }

    void popScope() {
        scope.pop_back();
    }

    void debugScope(std::ostream &dst) {
        for (int i = scope.size()-1; i>-1; i--){
            dst<<"Scope Level "<< i << ":\n";
            scope[i].DebugVars(dst);
        }
    }

};

void inline Three_reg(std::ostream &dst,std::string inst,std::string dstReg, std::string reg1, std::string reg2){
    dst<<inst<<" "<<dstReg<<","<<reg1<<","<<reg2<<std::endl;
};

void inline Two_reg(std::ostream &dst,std::string inst,std::string dstReg,std::string reg){
    dst<<inst<<" "<<dstReg<<","<<reg<<std::endl;
};

void inline sw_lw(std::ostream &dst ,std::string inst ,std::string reg , int off , std::string offReg){
    dst<<inst<<" "<<reg<<","<<off<<"("<<offReg<<")"<<std::endl;
};

#endif
