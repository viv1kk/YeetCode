class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int best_len = 0;
        int best_ind = 0;
        
        for(int mid = 0; mid < n; mid++)
        {
            for(int j = 0; mid-j+1 >= 0 && mid+j < n; j++)
            {
                if(s[mid-j+1] != s[mid+j]) break;
                int len = 2*j;
                if(len > best_len)
                {
                    best_len = len;
                    best_ind = mid-j+1;
                }
            }
            for(int j = 0; mid-j >= 0 && mid+j < n; j++)
            {
                if(s[mid-j] != s[mid+j]) break;
                int len = 2*j+1;
                if(len > best_len)
                {
                    best_len = len;
                    best_ind = mid-j;
                }
            }
        }
        
        string ans = s.substr(best_ind, best_len);
        return ans;
    }    
};