class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0)
            return x;
        int l = 0, h = x;
        int ans = 0;
        while(l < h)
        {
            long long mid = (l+h)/2;
            long long d = mid*mid;
            if(d < x){
                ans = mid;
                l = mid+1;
            }
            else if(d > x) h = mid;
            else return mid;
       }
        return ans;
    }
};