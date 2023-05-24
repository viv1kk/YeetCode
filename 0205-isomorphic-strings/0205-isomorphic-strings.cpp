class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        if(n != t.length()) return false;
        unordered_map<char, char>mp1, mp2;
        
        for(int i= 0; i < n; i++)
        {
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        
        string e = "", f = "";
        
        for(int i = 0; i < n; i++)
        {
            e += mp1[s[i]];
            f += mp2[t[i]];
        }
        
        return (e == t)&(f == s);
    }
};