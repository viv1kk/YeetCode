class Solution {
public:
    string longestPalindrome(string s) {
        string a = "@#";
        
        for(auto i : s)
        {
            a+=i;
            a+='#';
        }
        a+='$';
        // cout<<a;
        int n = a.length();
        int p[2004] = {0};
        
        int l = 0, r = 0, c = 0, mx = 0;
        
        for(int i = 1; i < n-2; i++)
        {
            if(i < r)
            {
                p[i] = min(r-i, p[(2*c)-i]);
            }
            while(a[i+p[i]+1] == a[i-p[i]-1])
                p[i]++;
            if(i+p[i] > r)
            {
                r = i+p[i];
                c = i;
            }
            if(p[i] >= mx)
            {
                l = (i-p[i]-1)/2;
                mx = p[i];
            }
        }
        cout<<l<<' '<<mx;
        string ans = s.substr(l , mx);
        return ans;
    }
};