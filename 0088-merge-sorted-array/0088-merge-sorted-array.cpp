class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ind = m+n-1;
        int i = m-1, j = n-1;
        if(m == 0){nums1 = nums2; return;}
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] <= nums2[j])
            {
                swap(nums2[j], nums1[ind]);
                j--;
            }
            else
            {
                swap(nums1[i], nums1[ind]);
                i--;
            }
            ind--;
        }
        while(j>=0)
        {
            nums1[ind--]=nums2[j--];
        }
    }
};