class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(char &i : s){
            if(isalnum(i)) t += tolower(i);
        }
        
        int n = t.length();
        for(int i = 0, j = n-1; i < j; i++, j--){
            if(t[i] != t[j]) return false;
        }
        return true;
    }
};