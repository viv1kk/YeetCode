class Solution {
public:

    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans= 0;
        for(int i = 1; i < n; i++)
        {
            int ls = 0, lb = 0, rs = 0, rb = 0;
            for(int j = 0; j < i; j++)
            {
                if(rating[j] < rating[i]) ls++;
                else lb++;
            }
            for(int j = i+1; j < n; j++)
            {
                if(rating[j] < rating[i]) rs++;
                else rb++;
            }
            ans += (ls*rb)+(lb*rs);
        }
        return ans;
    }
};