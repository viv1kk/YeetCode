class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ns = "", nt = "";
        
        for(char i : s){
            if(i != '#')
                ns += i;
            else{
                if(ns.size()) ns.pop_back();
            }
        }
        for(char i : t){
            if(i != '#')
                nt += i;
            else{
                if(nt.size()) nt.pop_back();
            }
        }
        return ns == nt;
    }
};