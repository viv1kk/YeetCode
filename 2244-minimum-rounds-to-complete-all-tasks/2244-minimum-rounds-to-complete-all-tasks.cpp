class Solution {
public:
    int minimumRounds(vector<int>& t) {
        unordered_map<int, int>mp;
        for(int i = 0; i < t.size(); i++)
        {
            auto it = mp.find(t[i]);
            if(it == mp.end())
            {
                mp.insert({t[i], 1});
            }
            else
            {
                it->second += 1;
            }
        }
                          
        int r = 0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second == 1) return -1;
            else if((it->second)%3 == 0)
            {
                r+=(it->second)/3;
            }
            else
            {
                r+=((it->second)/3)+1;
            }
        }
        return r;
    }
};