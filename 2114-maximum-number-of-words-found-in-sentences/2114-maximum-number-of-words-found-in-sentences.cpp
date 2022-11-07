class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int max = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            int c = 0;
            for(int j = 0; j < s[i].size(); j++)
            {
                if(s[i][j] == ' ')c++;
            }
            c++;
            if(max < c) max = c;
        }
        return max;
    }
};