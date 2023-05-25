class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int i = 0;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        while(i < nums.size())
        {
            int x = nums[i]-1;
            if(nums[i] != nums[x])
                swap(nums[i], nums[x]);
            else i++;
        }
        
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != i+1)
                ans.push_back(i+1);
        }
        return ans;
    }
};