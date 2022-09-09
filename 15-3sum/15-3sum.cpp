class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); ++i)
        {
            int s = i+1, e = nums.size()-1;
            
            while(s < e)
            {  
                int x = nums[s];
                int y = nums[e];
                
                int n = nums[i]+nums[s]+nums[e];
                
                if(n == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[s]);
                    temp.push_back(nums[e]);
                    ans.push_back(temp);
                
                    while(s < e && nums[s] ==x)++s;
                    while(s < e && nums[e] ==y)--e ;
                    
                }
                else if(n < 0)
                {
                    // while(s+ < e && nums[s] ==x)++s;
                    ++s;
                }
                else
                {
                    --e;
                    // while(s < e && nums[e] ==y)--e ;
                }
            }
              
            while(i+1 < nums.size() && nums[i] == nums[i+1])++i;
        }
        return ans; 
    }
};