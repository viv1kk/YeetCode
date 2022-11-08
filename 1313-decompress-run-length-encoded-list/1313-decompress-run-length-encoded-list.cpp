class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        
        for(int i = 0; i < nums.size()-1; i+=2)
        {
            int f = nums[i], v = nums[i+1];
            while(f--)
            {
                ans.push_back(v);
            }
        }
        return ans;
    }
};