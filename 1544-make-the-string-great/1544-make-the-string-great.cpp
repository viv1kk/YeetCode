class Solution {
public:
    string makeGood(string s) {
        int i = 0;
        while(i+1 < s.length())
        {
            if(abs(s[i]-s[i+1]) == 32)
            {
                s.erase(s.begin()+i, s.begin()+i+2);
                // s.erase(s.begin()+i);
                i = 0;
                continue;
            }
            i++;
        }
        return s;
    }
};