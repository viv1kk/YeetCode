class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int f[26] = {0};
        
        for(char &i : magazine){
            f[i-'a']++;
        }
        
        for(char &i : ransomNote){
            if(f[i-'a'] == 0) return false;
            f[i-'a']--;
        }
        return true;
    }
};