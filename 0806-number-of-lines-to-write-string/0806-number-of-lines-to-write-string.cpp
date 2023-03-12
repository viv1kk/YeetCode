class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        
        vector<int>ans(2, 0);
        ans[0] = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if(ans[1]+w[s[i]-'a'] <=  100)
            {
                ans[1] += w[s[i]-'a'];
            }
            else
            {
                ans[0]++;   
                ans[1] = w[s[i]-'a'];
            }
        }
        return ans;
    }
};