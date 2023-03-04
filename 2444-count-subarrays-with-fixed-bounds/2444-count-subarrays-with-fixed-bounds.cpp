class Solution {
public:
    
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
       long res = 0;
        int n = nums.size();
        bool minf = false, maxf = false;
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            if (num < minK || num > maxK) {
                minf = false;
                maxf = false;
                x = i+1;
            }
            if (num == minK) {
                minf = true;
                y = i;
            }
            if (num == maxK) {
                maxf = true;
                z = i;
            }
            if (minf && maxf) {
                res += (min(y, z)-(x-1));
            }
        }
        return res;
    }
};