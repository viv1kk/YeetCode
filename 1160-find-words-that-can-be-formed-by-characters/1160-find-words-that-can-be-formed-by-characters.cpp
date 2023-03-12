class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int f[26] = {0};
        
        for(int i = 0; i < chars.length(); i++)
        {
            f[chars[i]-'a']++;
        }
        
        int count = 0;
        for(int i = 0; i < words.size(); i++)
        {
            bool flag = true;
            
            int t[26] = {0};
            
            for(char j : words[i])
            {
                t[j-'a']++;
            }
            
            for(char j : words[i])
            {
                if(f[j-'a']  <  t[j-'a'])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) count += words[i].length();
        }
        return count;
    }
};