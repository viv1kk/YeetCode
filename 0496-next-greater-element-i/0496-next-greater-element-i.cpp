class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size());
            
        for(int i = 0; i < nums1.size(); i++)
        {
            int f = 0;
            int val = -1;
            for(int j = 0; j < nums2.size(); j++)
            {
                if(f == 1)
                {
                    if(nums1[i] < nums2[j])
                    {
                        val = nums2[j];
                        break;
                    }
                }
                else{
                    if(nums1[i]==nums2[j])
                        f = 1;
                }
            }
            ans[i] = val;
        }
        return ans;    
    }
};