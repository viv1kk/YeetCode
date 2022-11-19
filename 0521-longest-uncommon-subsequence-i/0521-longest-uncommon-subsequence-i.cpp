class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.length()  != b.length() || a != b)
            return max(a.length(), b.length());
        return -1;
    }
};