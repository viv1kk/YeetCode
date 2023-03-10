class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int f[26] = {0};
        
        int count = 0;
        for(int i = 0; i < brokenLetters.length(); i++)
        {
            f[brokenLetters[i]-'a']++;
        }
        text += ' ';
        
        bool flag = false;
        for(int i = 0; i < text.length(); i++)
        {
            if(text[i] == ' ')
            {
                if(!flag) count++;
                flag = false;
                continue;
            }    
            if(f[text[i]-'a'] == 1) flag = true;
        }
        return count;
    }
};