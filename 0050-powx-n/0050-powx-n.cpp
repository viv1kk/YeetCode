class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0.0 || x == 1.0) return x;
        if(x == -1.0)
        {
            if(n%2) return -1.0;
            return 1.0;
        }
        
        double ans = 1.0;
        if(n > 0.0)
        {
            while(n--)
            {
                ans *= x;
            }
        }
        else
        {
            while(n++)
            {
                ans *= 1.0/x;
                if(ans == 0.0) return ans;
            }
        }
        return ans;
    }
};