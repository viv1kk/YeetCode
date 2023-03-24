class Solution {
public:
    int appendCharacters(string s, string t) {
        int ind = 0;        
        
        for(int i = 0; i < s.length(); i++)
        {
            if(ind < t.length() && s[i] == t[ind])
                ind++;
        }
        return t.length()-ind;
    }
};