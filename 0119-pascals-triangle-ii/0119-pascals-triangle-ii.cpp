class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int dp[34][34] = {0};
        for(int i = 0; i <= rowIndex; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == 0 || i == j) dp[i][j] = 1;
                else dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
            }
        }
        vector<int>ans;
        for(int i = 0; i <= rowIndex; i++)
        {
            ans.push_back(dp[rowIndex][i]);
        }
        return ans;
    }
};