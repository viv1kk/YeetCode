class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>>st;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1, k = n-1; j < k; ){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum > 0)k--;
                else if(sum < 0) j++;
                else{
                    st.push_back({nums[i], nums[j], nums[k]});
                    int prev = nums[j];
                    while(j<k&& nums[j] == prev)j++;
                    prev = nums[k];
                    while(j<k&&nums[k] == prev)k--;
                }
            }
            int prev = nums[i];
            if(nums[i] == prev){
                while(i < n && nums[i] == prev)i++;
                i--;
            }
        }
        // vector<vector<int>>ans;
        // for(auto &i : st) ans.emplace_back(i);
        return st;
    }
};