class Solution {
public:   

    string convert(string s, int numRows) {
        vector<vector<char>>v(1001);
        int c = 0;
        bool f = true;
        for(int i = 0; i < s.length(); i++)
        {
            v[c].push_back(s[i]);
            if(f)c++;
            else c--;
            if(c < 0){ f=true; c = (c+2)%numRows;}
            else if(c == numRows) {f = false; c = (numRows-2)%numRows;}
        }
        string ans = "";
        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < v[i].size(); j++)
            {
                ans += v[i][j];
            }
        }
        return ans;
    }
};