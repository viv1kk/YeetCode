class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        long long p[n];
        p[0] = nums[0];
        for(int i = 1; i < n; i++){
            p[i] = p[i-1]+nums[i];
        }
        
        long long ans = -1;
        for(int i = 2; i < n; i++){
            if(p[i-1] > nums[i]){
                ans = p[i];
            }
        }
        
        
        // for(int i : p) cout<<i<<", ";
        // cout<<endl;
        return ans;
        // return 0;
    }
};