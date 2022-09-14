class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        if(nums.size() < 4)
            return ans;
        
        sort(nums.begin(), nums.end());
        
        int s, e;
        for(int i = 0; i < nums.size()-3; i++)
        {
            for(int j = i+1; j < nums.size()-2; j++)
            {
                s = j+1, e = nums.size()-1;
             
                while(s < e)
                {
                    long x = (long)target - ((long)nums[i]+(long)nums[j]+(long)nums[s]+(long)nums[e]);
                
                    if(x > 0)
                    {
                        ++s;
                        
                    }
                    else if(x < 0)
                    {
                        e--;
                    }
                    else
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[s]);
                        temp.push_back(nums[e]);
                        ans.push_back(temp);


                        while(s < e && nums[s] == nums[s+1])s++;
                        while(e > s && nums[e] == nums[e-1])e--;
                        s++;
                        e--;
                    }
                }
                while(j < nums.size()-2 && nums[j] == nums[j+1])j++;
            }
            while(i < nums.size()-3 && nums[i] == nums[i+1])i++;
        }
        return ans;
    }
};