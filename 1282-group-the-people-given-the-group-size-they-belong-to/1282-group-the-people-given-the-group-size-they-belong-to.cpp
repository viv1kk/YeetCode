class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, int>mp;
        for(auto i : groupSizes) mp[i]++;
        int n = groupSizes.size();
        int num = mp.size();
        vector<vector<int>>ans;
        for(auto i : mp)
        {
            vector<int>t;
            for(int j = 0; j < n; j++)
            {   
                if(groupSizes[j] == i.first)
                {
                    t.push_back(j);
                    if(t.size() == i.first)
                    {
                        ans.push_back(t);
                        t.clear();
                    }
                }
            }
        }
        return ans;

    }
};