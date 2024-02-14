class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int i : nums){
            if(i > 0) pos.push_back(i);
            else neg.push_back(i);
        }
        int n = nums.size();
        // if(nums[0] > 0) swap(pos, neg);
        for(int i = 0; i < n; i+=2){
            nums[i] = pos[i/2];
            nums[i+1] = neg[i/2];
        }
        return nums;
    }
};