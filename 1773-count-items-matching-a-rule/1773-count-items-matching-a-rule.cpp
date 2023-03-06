class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int n = items.size();
        if(ruleKey == "type")
        {
            for(int i = 0; i < n; i++)
            {
                if(items[i][0] == ruleValue)count++;
            }
        }
        else if(ruleKey == "color")
        {
            for(int i = 0; i < n; i++)
            {
                if(items[i][1] == ruleValue)count++;
            }
        }
        else 
        {
            for(int i = 0; i < n; i++)
            {
                if(items[i][2] == ruleValue)count++;
            }
        }
        return count;
    }
};