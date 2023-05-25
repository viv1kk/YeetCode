class NumArray {
public:
    vector<int>v;
    
    NumArray(vector<int>& nums) {
        int sum = 0;
        v.push_back(0);
        for(int i : nums){
            sum += i;
            v.push_back(sum);
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