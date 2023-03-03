class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(n < m) return -1;
        if(n == m && haystack == needle) return 0;
        for(int i = m-1; i < n; i++)
        {
            if(haystack[i-m+1] == needle[0] && haystack[i] == needle[m-1])
            {
                int k = i-m+1, flag = 0;
                for(int j = 1; j < m-1; j++)
                {
                    if(haystack[++k] != needle[j]){ flag = 1; break;}
                }
                if(flag == 0)
                    return i-m+1;
            }               
        }
        return -1;
    }
};