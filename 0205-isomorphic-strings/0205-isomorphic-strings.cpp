class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, char>mp1, mp2;
        
        for(int i= 0; i < s.size(); i++)
        {
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        
        string e = "", f = "";
        
        for(int i = 0; i < s.size(); i++)
        {
            e += mp1[s[i]];
            f += mp2[t[i]];
        }
        
        return (e == t)&(f == s);
    }
};