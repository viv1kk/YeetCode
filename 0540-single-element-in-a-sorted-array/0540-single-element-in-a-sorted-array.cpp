class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        int n = nums.size();
        
        while(l <= r)
        {
            int mid = l+(r-l)/2;
            if(mid%2 == 1)
            {
                if(mid > 0 && nums[mid] == nums[mid-1]) l = mid+1;
                else if(mid < n-1  && nums[mid] == nums[mid+1]) r = mid-1;
                else return nums[mid];
            }
            else
            {
                if(mid < n-1 && nums[mid] == nums[mid+1]) l = mid+1;
                else if(mid > 0  && nums[mid] == nums[mid-1]) r = mid-1;
                else return nums[mid];
            }
        }
        return 0;
    }
};