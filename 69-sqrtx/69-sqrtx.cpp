class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0)
            return x;
        long int s = 0, e = x;
        long int ans;
        while(s <= e)
        {
            long mid = s+((e-s)>>1);
            long int temp = mid*mid;
            if(temp <= x)
            {
                ans = mid;
                s = mid+1;
            }
            else
                e = mid-1;
        }
        return ans;
    }
};