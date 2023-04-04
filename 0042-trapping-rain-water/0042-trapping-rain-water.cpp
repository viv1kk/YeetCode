class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l[n], r[n];
        
        int mx1 = 0, mx2 = 0;
        for(int i = 0, j = n-1; i < n; i++, j--)
        {
            mx1 = max(mx1, height[i]);
            l[i] = mx1;
            mx2 = max(mx2, height[j]);
            r[j] = mx2;
        }
        
        int count = 0;
        
        for(int i = 0; i < n; i++){
            count += min(l[i], r[i])-height[i];
        }
        return count;
        
    }
};