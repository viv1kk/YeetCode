class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        
        int max = 0;
        
        for(int i = 0; i < a.size(); ++i)
        {
            int sum = 0;
            for(int j = 0; j < a[i].size(); ++j)
            {
                sum += a[i][j];
            }
            if(sum > max)
                max = sum;
        }
        return max;
    }
};