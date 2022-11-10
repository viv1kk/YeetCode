class Solution {
public:
    bool isPalindrome(string &s)
    {
        for(int i = 0, j = s.length()-1; i < j; i++, j--)
        {
            if(s[i] != s[j]) return false;
        }
        return true;
    }
    int findPalindromeOflen(int x, string &s)
    {
        for(int i = 0; i+x <= s.length(); i++)
        {
            string t = s.substr(i, x);
            if(isPalindrome(t)) return i;
        }
        return -1;
    }
    
    string longestPalindrome(string s) {
        int n = s.length();
        int best_len = 0;
        int best_ind = 0;
        
        for(int i : {0, 1})
        {
            int l = 1, r = n;
            
            if(l%2 != i) l++;
            if(r%2 != i) r--;
            
            while(l <= r)
            {
                int mid = l+(r-l)/2;
                if(mid%2 != i) mid++;
                
                if(mid > r)break;
                
                int ind = findPalindromeOflen(mid, s);
                
                if(ind != -1)
                {
                    if(best_len < mid)
                    {
                        best_len = mid;
                        best_ind = ind;
                    }
                    l = mid+2;
                }
                else
                    r = mid-2;
                
            }
        }
        string ans = s.substr(best_ind, best_len);
        return ans;
    }    
};