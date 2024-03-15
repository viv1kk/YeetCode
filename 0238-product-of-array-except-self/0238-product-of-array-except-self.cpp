class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n), pos(n);
        
        pre[0] = nums[0];
        for(int i = 1; i < n; i++){
            pre[i] = pre[i-1]*nums[i];
        }
        pos[n-1] = nums[n-1];
        for(int i = n-2; i > -1; i--){
            pos[i] = pos[i+1]*nums[i];
        }
        
        vector<int>ans(n);
        
        for(int i = 0; i < n; i++){
            int l = i-1>=0?pre[i-1]:1;
            int r = i+1 < n?pos[i+1]:1;
            ans[i] = l*r;
        }
        return ans;
    }
};