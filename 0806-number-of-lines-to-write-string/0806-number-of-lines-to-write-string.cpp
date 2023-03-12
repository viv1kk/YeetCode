class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        
        vector<int>ans(2, 0);
        ans[0] = 1;
        for(int i = 0; i < s.length(); i++)
        {
            int x = w[s[i]-'a'];
            if(ans[1]+x <= 100)
            {
                ans[1] += x;
            }
            else
            {
                ans[0]++;   
                ans[1] = x;
            }
        }
        return ans;
    }
};