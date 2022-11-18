class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int mid = mat[n/2][n/2];
        for(int i = 0; i < n; i++)
        {
            sum +=mat[i][i];
            sum += mat[n-1-i][i];
        }
        return (n&1)?sum-mid:sum;
    }
};