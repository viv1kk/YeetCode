class Solution {
public:
    string longestPalindrome(string s) {
        string r = s;
        r = "$#";
        for(auto i : s)
        {
            r += i;
            r += '#';
        }
        r +='@';
        int n = r.length();
        vector<int>p(n, 0);
        
        int l = 0, e = 0, c = 0, mx = 0;
        for(int i = 1; i < n-2; i++)
        {
            if(i < e)
            {
                p[i] = min(e-i, p[2*c-i]);
            }
            while(r[i+p[i]+1] == r[i-p[i]-1])p[i]++;
            
            if(p[i]+i > e)
            {
                c = i;
                e = i+p[i];
            }
            if(mx < p[i])
            {
                l = (i-p[i]-1)/2;
                mx = p[i];
            }
        }
        string st = s.substr(l, mx);
        return st;
    }
};