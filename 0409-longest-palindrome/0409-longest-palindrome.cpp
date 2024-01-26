class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>mp;
        for(char i : s) mp[i]++;
        
        int odd = 0;
        int tot = 0;
        for(auto&[i, j] : mp){
            if(j%2) odd++;
            tot += j;
        }
        int ans = 0;
        if(odd > 1) ans = tot - odd + 1;
        else ans = tot;
        return ans;
    }
};