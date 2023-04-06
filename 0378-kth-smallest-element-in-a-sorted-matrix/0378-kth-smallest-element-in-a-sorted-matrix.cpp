class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int n = m.size();
        int l = m[0][0], r = m[n-1][n-1];
        
        int ans = 0;
        while(l <= r)
        {
            int mid = l+(r-l)/2;
            int count = 0;
            for(int i = 0; i < n; i++)
            {
                int x = 0, y = n-1;
                while(x <= y)
                {
                    int d = x+(y-x)/2;
                    if(m[i][d] > mid)
                        y = d-1;
                    else
                        x = d+1;
                }
                count += x;
            }
            if(count >= k)
            {
                ans = mid;
                r = mid-1;
            }
            else 
                l = mid+1;
        }
        return ans;
    }
};