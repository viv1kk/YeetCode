class Solution {
public:
    string longestPalindrome(string y) {
       string s = "@#";
        for(char i : y)
        {
            s += i;
            s += '#';
        }
        s+='$';
        
        int n = s.length();
        int l = 0, c = 0, r = 0, m = 0;
        
        vector<int>p(n, 0);
        for(int i = 1; i < n-2; i++)
        {
            if(i < r)
            {
                p[i] = min(r-i, p[2*c-i]);
            }
            
            while(s[i-p[i]-1] == s[i+p[i]+1])p[i]++;
            
            if(i+p[i] > r){
                r = i+p[i];
                c = i;
            }
            if(p[i] > m)
            {
                l = (i-p[i]-1)/2;
                m = p[i];
            }
            
        }
        string ans = y.substr(l, m);
        
        // cout<<r;
        return ans;
    }
};