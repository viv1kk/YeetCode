class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";
        
        int f[26] = {0};
        
        for(auto i : first)
        {
            f[i-'a'] = 1;
        }
        for(auto i : second)
        {
            f[i-'a'] = 2;
        }
        for(auto i : third)
        {
            f[i-'a'] = 3;
        }
        
        vector<string>ans;
        for(auto i : words)
        {
            int x = f[tolower(i[0])-'a'];
            bool flag = true;
            for(char j : i)
            {
                if(f[tolower(j)-'a'] != x)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)ans.push_back(i);       
        }
        return ans;
    }
};