class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end());
        vector<vector<int>>ans(2);
        
        for(int i : s1)
        {
            if(s2.find(i) == s2.end()) ans[0].push_back(i);
        }
        for(int i : s2)
        {
            if(s1.find(i) == s1.end()) ans[1].push_back(i);
        }        
        return ans;
    }
};