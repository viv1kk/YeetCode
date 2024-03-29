class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ind = m+n-1;
        int i = m-1, j = n-1;
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] <= nums2[j]) swap(nums2[j--], nums1[ind--]);
            else swap(nums1[i--], nums1[ind--]);
        }
        while(j>=0) nums1[ind--]=nums2[j--];
    }
};