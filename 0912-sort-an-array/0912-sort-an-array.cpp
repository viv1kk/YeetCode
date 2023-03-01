class Solution {
public:
    void Merge(vector<int>&nums, int l, int mid, int u)
    {
        int s1 = mid-l+1;
        int s2 = u-mid;
        
        int LR[s1+1];
        int RR[s2+1];
        
        for(int i = 0; i < s1; i++)
        {
            LR[i] = nums[l+i];
        }
        for(int i = 0; i < s2; i++)
        {
            RR[i] = nums[mid+i+1];
        }
        LR[s1] = RR[s2] = INT_MAX;
        int i = 0, j = 0;
        for(int k=l; k <= u; k++)
        {
            if(LR[i] <= RR[j]) nums[k] = LR[i++];
            else nums[k] = RR[j++];
        }
    }
    
    void mergeSort(vector<int>&nums, int l, int u)
    {
        if(l >= u) return;
        int mid = l+(u-l)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, u);
        Merge(nums, l, mid,u);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};