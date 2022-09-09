class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0)
            return x;
        long int s = 0, e = x;
        
        while(s < e)
        {
            long mid = s+((e-s)>>1);
            long int temp = mid*mid;
            if(temp == x)
                return mid;
            else if(temp < x)
                s = mid+1;
            else
                e = mid;
        }
        return s-1;
    }
};