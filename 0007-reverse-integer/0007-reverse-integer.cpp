class Solution {
public:
    int reverse(int x) {
        bool sign = true;
        if(x < 0)
            sign = false;
        long ans = 0;
        while(x)
        {
            int rem = abs(x)%10;
            ans *= 10;
            ans = (abs(ans)+rem);
            x /= 10;
            if(ans >= 0  && sign == false)
                ans *= -1;
            if(ans > INT_MAX || ans < INT_MIN)
                return 0;
        }
        return (int)ans;
    }
};