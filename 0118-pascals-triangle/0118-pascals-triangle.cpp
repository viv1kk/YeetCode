class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int dp[31][31];
        
        vector<vector<int>>ans;
        for(int i = 0; i < numRows; i++)
        {
            vector<int> temp;
            for(int j = 0; j <= i; j++)
            {
                if(i==j || j == 0) dp[i][j] = 1;
                else dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
                temp.push_back(dp[i][j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};