class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int best_len = 0;
        string best_str = "";
        
        // ODD CASE
        for(int mid = 0; mid < n; mid++)
        {
            for(int j = 0; mid-j >= 0 && mid+j < n; j++)
            {
                if(s[mid-j] != s[mid+j]) break;
                int len = 2*j+1;
                if(len > best_len)
                {
                    best_len = len;
                    best_str = s.substr(mid-j, len);
                }
            }
        }
        
        // Even CASE
        for(int mid = 0; mid < n; mid++)
        {
            for(int j = 0; mid-j+1 >= 0 && mid+j < n; j++)
            {
                if(s[mid-j+1] != s[mid+j]) break;
                int len = 2*j;
                if(len > best_len)
                {
                    best_len = len;
                    best_str = s.substr(mid-j+1, len);
                }
            }
        }
        return best_str;
    }
};