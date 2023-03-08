class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int>ans(n+1);
        int x = 0;
        int y = n;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'I')
                ans[i] = x++;
            else
                ans[i] = y--;
        }
        if(s.back() == 'I')ans[n] = x;
        else ans[n] = y;
        
        return ans;
    }
};