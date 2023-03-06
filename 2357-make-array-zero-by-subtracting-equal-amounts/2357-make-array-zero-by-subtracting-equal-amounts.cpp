class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>st(nums.begin(), nums.end());
        int count = st.size();
        if(st.find(0) != st.end())
            count--;
        return count;
    }
};