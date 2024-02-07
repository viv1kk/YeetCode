class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int>mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) mp[nums[i]] = i;        
        
        set<vector<int>> ans;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++)
            {
                
                int x = -(nums[i]+nums[j]);
                if(mp.find(x) != mp.end())
                {
                    int r = mp[-(nums[i]+nums[j])];
                    if(r != i && r != j) {
                        vector<int>temp = {nums[i], nums[j], -(nums[i]+nums[j])};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>>a;
        for(auto &i : ans){
            a.push_back(i);
        }
        return a;
    }
};