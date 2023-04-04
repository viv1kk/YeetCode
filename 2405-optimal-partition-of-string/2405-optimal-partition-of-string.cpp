class Solution {
public:
    int partitionString(string s) {
        bool c[26] = {false};
        
        int count = 1;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            
            if(c[s[i]-'a'])
            {
                memset(c, false, 26);
                ++count;
            }
            c[s[i]-'a'] = true;
        }
        return count;
    }
};