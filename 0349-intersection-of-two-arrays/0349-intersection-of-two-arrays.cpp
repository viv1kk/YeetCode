class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st, ans;
        for(int i : nums1){
            st.insert(i);
        }
        for(int i : nums2){
            if(st.find(i) != st.end()){
                ans.insert(i);
            }
        }
        
        return vector<int>(ans.begin(), ans.end());
    }
};