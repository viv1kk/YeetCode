class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int l = 0;
        int r = nums.size()-1;
        
        int a = 0;
        int b = 0;
        while(l <= r)
        {
            int mid = l+(r-l)/2;
            
            if(nums[mid] >= target)
                r = mid-1;
            else
                l = mid+1;
        }
        a = l;
        l = 0;
        r = nums.size()-1;
        while(l <= r)
        {
            int mid = l+(r-l)/2;
            
            if(nums[mid] <= target)
                l = mid+1;
            else
                r = mid-1;
        }
        b = r;
        
        vector<int>ans;
        while(a <= b){
            ans.push_back(a++);
        }
        
        return ans;
    }
};