class Solution {
public:
    void bs(vector<int>&a, vector<int>&b, int t, int s, int e)
    {
        if(s > e)
            return; 
        int mid = s+(e-s)/2;
        if(a[mid] < t)
            bs(a, b, t, mid+1, e);
        else if(a[mid] > t)
            bs(a, b, t, s, mid-1);
        else
        {
            
            bs(a, b, t, s, mid-1);
            b[0]= min(b[0],mid);
            bs(a, b, t, mid+1, e);
            b[1] = max(b[1], mid);   
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a(2);
        a[0] = INT_MAX;
        a[1] = INT_MIN;
        int n = nums.size()-1;
        bs(nums, a, target, 0, n);
        a[0] = (a[0] == INT_MAX)?-1:a[0];
        a[1] = (a[1] == INT_MIN)?-1:a[1];
        return a;
    }
};