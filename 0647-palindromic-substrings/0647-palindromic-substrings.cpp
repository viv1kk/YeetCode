class Solution {
public:
    int countSubstrings(string st) {
        string r = "$#";
        for(char i : st)
        {
            r += i;
            r +='#';
        }
        r += '@';
        int p[2005] = {0};
        int n = r.length();
        int s = 0, e = 0, c = 0, mx = 0;
        for(int i = 1; i < n-2; i++)
        {
            if(i < e) p[i] = min(e-i, p[((2*c)-i)]);
            while(r[i+p[i]+1] == r[i-p[i]-1]) p[i]++;
            if(i+p[i] > e){ c = i; e = i+p[i]; }
        }
        int count = 0;
        for(int i = 0; i < n; i++)
            count += ((p[i]+1)/2);
        return count;
    }
};