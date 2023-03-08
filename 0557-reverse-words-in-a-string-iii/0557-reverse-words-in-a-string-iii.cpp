class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        int n = s.length();
        int prev = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+prev, s.begin()+i);
                prev = i+1;
            }
        }
        s.pop_back();
        return s;
    }
};