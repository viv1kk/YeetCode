class Solution {
public:
    int countSubstrings(string str) {
        string s = "$#";
        for(int i = 0; i < str.length(); i++)
        {
            s.push_back(str[i]);
            s.push_back('#');
        }
        s.push_back('@');

        int d = s.length();
        int p[2004]={0};

        int l = 0, c = 0, r = 0, mx = 0;
        for(int i = 1; i < d-2; i++)
        {
            if(i<r) p[i] = min(r-i, p[(2*c-i)]);
            while(s[(i-p[i]-1)]==s[(i+p[i]+1)])p[i]++;
            if(i+p[i]>r)c=i,r=i+p[i];
        }
        int count = 0;
        for(int i = 0; i < d; i++)
        {
            if(i&1) count=count+(p[i]/2);
            else count=count+(p[i]+1)/2;;
        }
        return count;
    }
};