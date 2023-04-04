class Solution {
public:
    int partitionString(string s) {
        bool c[26] = {false};
        
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(c[s[i]-'a'])
            {
                memset(c, false, 26);
                count++;
            }
            c[s[i]-'a'] = true;
        }
        return ++count;
    }
};