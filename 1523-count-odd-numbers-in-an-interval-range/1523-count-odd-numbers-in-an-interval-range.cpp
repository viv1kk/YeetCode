class Solution {
public:
    int countOdds(int low, int high) {
        int a = low%2;
        int b = high%2;
        
        int ans = 0;
        if(a == 1)
        {
            ans++;
            low++;
        }
        if(b == 1)
        {
            ans++;
            high--;
        }
        ans += (high-low)/2;
        return ans;
    }
};