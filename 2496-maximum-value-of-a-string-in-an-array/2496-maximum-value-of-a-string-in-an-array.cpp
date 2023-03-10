class Solution {
public:
    int maximumValue(vector<string>& strs) {
        bool num = true;
        int mx = 0;
        for(int i = 0; i < strs.size(); i++)
        {
            num = true;
            for(int j = 0; j < strs[i].length(); j++)
            {
                if((strs[i][j] >= 'a' && strs[i][j] <= 'z'))
                {
                    num = false;
                    break;
                }
            }
            if(num) mx = max(mx, stoi(strs[i]));
            else mx = max(mx, (int)strs[i].length());
        }
        return mx;
    }
};