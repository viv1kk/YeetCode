class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int>mp;
        for(int i : nums){
            mp[i]++;
        }
        int mx = 0;
        for(auto[i, j] : mp){
            mx = max(mx, j);
        }
        int ans = 0;
        for(auto[i, j] : mp){
            if(j == mx) ans += j;
        }
        return ans;
    }
};