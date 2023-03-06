class Solution {
    typedef long long ll;
public:
    ll lcm(ll a, ll b)
    {
        return (a*b)/gcd(a, b);
    }
    
    ll f(int x, ll a, ll b, ll c)
    {
        return x/a + x/b + x/c - x/lcm(a,b) - x/lcm(b,c) - x/lcm(a,c) + x/lcm(a, lcm(b,c));  
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        ll l = 0;
        ll h = INT_MAX;
        
        while(l <= h)
        {
            ll mid = l+(h-l)/2;
            if(f(mid, a, b, c) >= n) h = mid-1;
            else l = mid+1;
        }
        return l;
    }
};