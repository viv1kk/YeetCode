class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            mp.insert({nums[i], i});
        }
        
        int i = 0;
        while(i < nums.size())
        {
            int n = target - nums[i];
            auto it = mp.find(n);
            if(it != mp.end() && it->second != i)
            {
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};