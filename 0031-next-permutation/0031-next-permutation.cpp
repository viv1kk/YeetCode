class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s = nums.size(), p = 0;
        
        for(p = s-2; p >= 0; p--)
        {
            if(nums[p] < nums[p+1]) break;                
        }
        
        if(p < 0) reverse(nums.begin(),nums.end());
        else
        {
            for(int i = s-1; i > p; i--)
            {
                if(nums[p] < nums[i]) {swap(nums[i], nums[p]); break;}           
            }
            reverse(nums.begin()+p+1, nums.end());
        }
          
    }
};