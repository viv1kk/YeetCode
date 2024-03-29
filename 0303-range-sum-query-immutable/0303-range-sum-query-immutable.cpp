class NumArray {
private:
    vector<int>v;
public:
    
    NumArray(vector<int>& nums) {
        v.push_back(0);
        int n = nums.size();
        for(int i = 0; i < n; i++){
            v.push_back(v[i]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1]-v[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */