class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].length();
        int count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 1; j < strs.size(); j++)
            {
                if((strs[j-1][i] <= strs[j][i])){
                    continue;
                }
                count++;
                break;
            }
        }
        return count;
    }
};