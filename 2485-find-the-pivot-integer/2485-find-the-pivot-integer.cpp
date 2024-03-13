class Solution {
public:
    int pivotInteger(int n) {
        int l = 1;
        int r = n;
        
        int tot = n*(n+1)/2;
        while(l <= r){
            int mid = (l+r)/2;
            int t = mid*(mid+1)/2;
            int u = tot-t + mid;
            if(t == u) return mid;
            else if(t>u) r = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};