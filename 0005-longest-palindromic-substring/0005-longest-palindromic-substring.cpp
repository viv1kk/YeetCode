bool isPalindrome(string str)
{
    int s = str.length();
    for(int i = 0, j = s-1; i < j; i++, j--)
    {
        if(str[i] != str[j])
            return false;
    }
    return true;
}

int checkPalindromeOfSize(int s, string str)
{
    for(int i = 0; i+s <= str.length(); i++){
        if(isPalindrome(str.substr(i, s)))
            return i;
    }
    return -1;
}
class Solution {
public:


string longestPalindrome(string s) {
    int n = s.length();

    int best_len = 0;
    string best_str = "";


    //if i == 0 find even length palindromic substring 
    //if i == 1 find odd length plalindromic substring
    for(int i = 0; i <= 1; i++)
    {
        int S = 1, E = n;

        if((S&1) != i)S++;
        if((E&1) != i)E--;

        while(S <= E)
        {
            int mid = S+(E-S)/2;

            if((mid&1) != i)mid++;
            if(mid > E) break;

            // check wheather there is a palindromic substring of length m 
            int ind = checkPalindromeOfSize(mid, s);
            
            if(ind != -1)
            {
                if(mid > best_len)
                {
                    best_len = mid;
                    best_str = s.substr(ind, mid);
                }
                S = mid + 2;
            }
            else
            E = mid - 2;
        }   
    }
    return best_str;
}

};