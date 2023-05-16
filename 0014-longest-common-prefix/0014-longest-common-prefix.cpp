class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int minlen =strs[0].size();
        for(int i = 1; i < n; i++)
        {
            minlen = min(minlen, (int)strs[i].size());
        }
        
        string ans = "";
        for(int i = 0; i < minlen; i++)
        {
            char temp = strs[0][i];
            for(int j = 1; j < n; j++)
            {
                if(strs[j][i] != temp)
                    return ans; 
            }
            ans += temp;
        }
        return ans;
    }
};