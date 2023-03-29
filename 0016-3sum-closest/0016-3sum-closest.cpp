class Solution {
public:
    
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int ans = 0, as = INT_MAX;
        for(int i = 0; i < n-2; i++)
        {
            int j = i+1, k = n-1;
            
            while(j < k)
            {
                int x = nums[i]+nums[j]+nums[k];
                if(x < target) j++;
                else if(x > target) k--;
                else return x;
                
                if(abs(target-x) < as){
                    as=abs(target-x);
                    ans = x;
                }
            }
        }
        return ans;
    }
};