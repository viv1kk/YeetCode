class Solution {
    typedef long long ll;
public:
    ll lcm(ll a, ll b){
        return (a*b)/gcd(a, b);
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        ll l = 0;
        ll h = INT_MAX;
        
        while(l <= h)
        {
            ll x = l+(h-l)/2;
            if((x/a + x/b + x/c - x/lcm(a,b) - x/lcm(b,c) - x/lcm(a,c) + x/lcm(a, lcm(b,c))) >= n) h = x-1;
            else l = x+1;
        }
        return l;
    }
};