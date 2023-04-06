class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        priority_queue<int, vector<int>, greater<int>>pq;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        int ans = 0;
        while(k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};