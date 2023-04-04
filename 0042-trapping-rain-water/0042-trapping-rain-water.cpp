class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        
        int lmax = 0, rmax = 0;
        int count = 0;
        
        while(l < r)
        {
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);
            
            if(height[l] < height[r])
            {
                if(height[l] < lmax)
                {
                    count += lmax-height[l];
                }
                l++;
            }
            else if(height[l] >= height[r]){
                if(height[r] < rmax)
                {
                    count += rmax-height[r];
                }
                r--;
            }
        }
        return count;
    }
};