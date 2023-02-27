class Solution {
public:
    vector<string> cellsInRange(string s) {
        int a = s[1];
        int b = s[4];
        
        int x = s[0], y = s[3];
        
        vector<string>ans;
        for(int i = x; i <= y; i++)
        {
            for(int j = a; j <= b; j++)
            {
                string t = "";
                t += (char)i;
                t += (char)j;
                ans.push_back(t);
            }
        }
        return ans;
    }
};