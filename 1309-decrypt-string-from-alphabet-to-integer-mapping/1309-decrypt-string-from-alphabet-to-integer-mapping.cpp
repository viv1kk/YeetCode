class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.length()-1;
        string t = "";
        
        for(int i = n; i>=0 ; i--)
        {
            if(s[i] != '#')
            {
                t += 'a'+(s[i]-'1');
            }
            else
            {
                string x = "";
                x+=s[i-2];
                x +=s[i-1];
                int ind = stoi(x);
                t += 'a'+ ind-1;
                i -=2;
            }
        }
        reverse(t.begin(), t.end());
        return t;
    }
};