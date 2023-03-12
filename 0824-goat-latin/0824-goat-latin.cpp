class Solution {
public:
    string toGoatLatin(string s) {
        string vow = "aeiouAEIOU";
        string ma = "maa";
        s += ' ';
        int prev = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ')
            {
                if(vow.find(s[prev]) == -1)
                {
                    string t = "";
                    t += s[prev];
                    s.insert(i, t);
                    s.erase(prev, 1);
                }
                s.insert(i, ma);
                i += ma.length();
                ma+='a';
                prev = i+1;
            }
        }
        s.pop_back();
        return s;
    }
};