class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_ind = INT_MAX;
        string ms = "";
        for(auto i : strs)
        {
            if(min_ind > i.length()){ min_ind = i.length();ms = i;}
        }
        string s = "";
        int fl = 0;
        for(int j = 0; j < min_ind; j++)
        {
            for(int i = 0; i < strs.size(); i++)
            {
                if(strs[i][j] != ms[j]){ fl = 1; break; }
            }
            if(fl == 1) break;        
            s += ms[j];
        }
        return s;
    }
};