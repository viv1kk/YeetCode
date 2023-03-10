class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a')
            {
                if(b) return false;
            }
            else
            {
                b = true;
            }
        }
        return true;
    }
};