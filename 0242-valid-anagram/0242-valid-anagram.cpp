class Solution {
public:
    bool isAnagram(string s, string t) {
        int f[26] = {0};
        
        for(char i : s)
        {
            f[i-'a']++;
        }
        for(char i : t)
        {
            f[i-'a']--;
        }
        for(int i = 0; i < 26; i++)
        {
            if(f[i] != 0)
                return false;
        }
        return true;
    }
};