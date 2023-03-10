class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans(s.length());
        vector<int>ind;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == c)
                ind.push_back(i);
        }
        
        int l = 0, r = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(i == ind[r])
            {
                l = r;
                if(r+1 < ind.size())r++;
            }
            ans[i] = min(abs(i-ind[l]), abs(i-ind[r]));
        }
        return ans;
    }
};