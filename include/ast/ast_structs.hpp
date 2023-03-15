#ifndef ast_structs_hpp
#define ast_structs_hpp

struct Params{
    std::string type;
    int offset = -20;

    Params ( std::string _type, int _offset) : type(_type), offset(_offset) {}
};

struct Symbol_map{

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
        int offset = 0;
        for (auto& it: bindings) {
            if (it.second.offset > offset) { 
                offset = it.second.offset;
            }
        } 
        return offset;
    }

    void addSymbol (std::string _varname, std::string _type, int _offset){
        bindings[_varname] = Params(_type, _offset);
    }

    void addSymbol (std::string _varname,Params params){
        bindings[_varname] = params;
    }

    void DebugSymbol (std::ostream &dst) {
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
    std::vector<Symbol_map> symbols;

    Params getVarInfo (std::string var) {
        for ( int i = symbols.size(); i > -1 ; i--){
            if (symbols[i].findVar(var)){
                return symbols[i].getParams(var);
            }
        }
        Params error = Params("0",0);
        return error;
    }

    void addGlobal(std::string var, Params varinfo) {
        symbols[0].addSymbol(var, varinfo);
    }   

    void addSymbol(std::string var, Params varinfo) {
        symbols[-1].addSymbol(var, varinfo);
    } 

    void newScope() { 
        Symbol_map _symbols;
        symbols.push_back(_symbols);
    }

    void popScope() {
        symbols.pop_back();
    }
    
    void debugScope(std::ostream &dst) {
        for (int i = symbols.size()-1; i>-1; i--){
            dst<<"Scope Level "<< i << ":\n";
            symbols[i].DebugSymbol(dst);
        } 
    } 
};
struct Context{
    Scope scope;
    Registers regs;
    int offset;

    std::string make_label (std::string label){
        static int unique = 0 ;
        return label + std::to_string(unique++);
    }

};

#endif