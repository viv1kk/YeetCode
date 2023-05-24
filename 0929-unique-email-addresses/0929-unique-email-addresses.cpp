class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int>mp;
        
        for(int i = 0; i < emails.size(); i++)
        {
            string x = "";
            bool pl = false;
            bool at = false;
            for(char j : emails[i])
            {
                
                if(j == '@')
                {
                    at = true;
                    x += j;
                    continue;
                }
                if(!at)
                {
                    if(j == '.') continue;
                    if(j == '+'){
                        pl = true;
                    }
                    if(pl == true) continue;
                    x += j;
                }
                else
                {
                    x += j;
                }
            }
            mp[x]++;
        }
        return mp.size();
    }
};