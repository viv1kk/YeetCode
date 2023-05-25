class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0, rsum = 0;
        int n = nums.size();
        vector<int>l(n), r(n);
        
        
        for(int i = 0; i < n; i++)
        {
            lsum += nums[i];
            l[i] = lsum;
            
            rsum += nums[n-1-i];
            r[n-1-i] = rsum;
        }
        
        for(int i = 0; i < n; i++)
        {
            if(l[i] == r[i])
                return i;
        }
        return -1;
    }
};