class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int freq[26] = {0};
        
        for(auto &i : words)
        {
            for(auto &j :i)
            {
                freq[j-'a']++;
            }
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0 && (freq[i]%words.size()) != 0)
                return false;
        }
        return true;   
    }
};