class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i+1, k = nums.size()-1; j < k; )
            {
                int x = nums[j];
                int y = nums[k];
                
                int val = nums[i]+nums[j]+nums[k];
                if(val == 0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    
                    ++j;
                    --k;
                    while(j < k && nums[j] == x)++j;
                    while(j < k && nums[k] == y)--k;
                }
                else if(val < 0)
                {
                    // ++j;
                    while(j < k && nums[j] == x)++j;
                    
                }
                else
                {
                    // --k;
                    while(j < k && nums[k] == y)--k;
                }
            }
            
            while(i + 1 != nums.size() && nums[i] == nums[i+1])++i;
        }
        return ans;
    }
};