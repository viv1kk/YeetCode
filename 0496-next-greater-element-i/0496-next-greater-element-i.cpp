class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans;
        unordered_map<int, int>mp;
        
        for(int i = 0; i < nums2.size(); i++)
        {
            while(!st.empty() && nums2[i] > st.top())
            {
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        
        while(!st.empty())
        {
            mp[st.top()] = -1;
            st.pop();
        }
        
        for(int i = 0; i < nums1.size(); i++)
        {
            if(mp[nums1[i]])
            {
                ans.push_back(mp[nums1[i]]);
            }
        }
        return ans;
    }
};