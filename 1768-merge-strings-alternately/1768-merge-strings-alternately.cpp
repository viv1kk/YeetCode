class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string s = "";
        
        int m = word1.length();
        int n = word2.length();
        
        while(i < m || j < n)
        {
            if(i < m) s += word1[i++];
            if(j < n) s += word2[j++];
        }
        return s;
    }
};