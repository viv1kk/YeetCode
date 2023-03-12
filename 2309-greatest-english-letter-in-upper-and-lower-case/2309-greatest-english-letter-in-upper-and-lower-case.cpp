class Solution {
public:
    string greatestLetter(string s) {
        int u[26] = {0};
        int l[26] = {0};
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] <='Z')u[s[i]-'A'] = 1;
            else l[s[i]-'a'] = 1;
        }

        for(int i = 25; i >= 0 ; i--)
        {
            if(u[i] == l[i] && u[i] == 1)
            {
                string x = "";
                x+= 'A'+i;
                return x;
            }
        }
        return "";
    }
};