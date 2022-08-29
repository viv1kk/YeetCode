class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = {0};
        
        for(int i = 0; i < magazine.length(); i++)
            hash[magazine[i]-'a']++;
        
        for(int j = 0; j < ransomNote.length(); j++)
        {
            if(hash[ransomNote[j]-'a'] > 0)
                hash[ransomNote[j]-'a']--;
            else
                return false;
        }
        return true;
    }
};