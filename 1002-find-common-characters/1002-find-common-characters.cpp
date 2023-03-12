class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int f[256] = {0};
    
        for(char j : words[0])
            f[j]++;    
        
        for(int i = 1; i < words.size(); i++)
        {
            int t[256] = {0};
            for(char j : words[i])
            {
                t[j]++;
            }
            for(int j = 0; j < 256; j++)
            {
                if(t[j] != f[j])
                {
                    f[j] = min(t[j], f[j]);
                }
            }
        }
        vector<string>ans;
        
        for(int i = 0; i < 256; i++)
        {
            if(f[i] == 0) continue;
            string s = "";
            for(int j = 0; j < f[i]; j++)
            {
                s+=i;
                ans.push_back(s);
                s = "";
            }
            
        }
        return ans;
    }
};