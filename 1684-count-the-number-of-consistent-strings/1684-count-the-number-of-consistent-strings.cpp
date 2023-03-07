class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool f[26] = {false};
        
        for(char i : allowed)
            f[i-'a'] = true;
        
        int count = words.size();
        for(string i : words)
        {
            for(char j : i)
            {
                if(f[j-'a'] == false){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};