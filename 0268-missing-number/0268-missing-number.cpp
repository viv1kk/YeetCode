class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int mx = nums.size();
        for(int i : nums){ sum+=i;}
        return (mx*(mx+1)/2)-sum;
    }
};