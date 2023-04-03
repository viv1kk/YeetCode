class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0.0) return 0.0;
        long long d = abs((long long)n);
        
        double ans = 1.0;
        while(d > 0)
        {
            if(d%2==1)
            {
                ans *= x;
            }
            x*=x;
            d/=2;
        }
        if(n < 0)
            return 1.0/ans;
        return ans;
    }
};