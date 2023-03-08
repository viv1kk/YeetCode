class Solution {
public:
    char repeatedCharacter(string s) {
        int f[26] = {0};
        int n = s.length();
        for(char i : s){
            f[i-'a']++;
            if(f[i-'a'] == 2) return i;
        }
        return ' ';
    }
};