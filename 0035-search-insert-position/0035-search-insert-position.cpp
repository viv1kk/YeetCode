class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int s = 0, e = a.size()-1;
        while(s <= e)
        {
            int mid = s+((e-s)>>1);
            if(a[mid] == target)return mid;
            else if(a[mid] < target)s = mid+1;
            else e = mid-1;
        }
        return s;
    }
};