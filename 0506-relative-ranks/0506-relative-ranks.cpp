class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>>v;
        for(int i = 0; i < score.size(); i++)
        {
            v.push_back({score[i], i});
        }
        priority_queue<pair<int, int>> pq;
        
        for(auto i : v)
        {
            pq.push(i);
        }
        
        int i = 1;
        
        vector<string>ans(score.size());
        while(!pq.empty())
        {
            string s = "";
            if(i == 1)
            {
                s = "Gold Medal";
            }
            else if(i == 2)
            {
                s = "Silver Medal";
            }
            else if(i == 3)
            {
                s = "Bronze Medal";
            }
            else
            {
                s += to_string(i);
            }
            
            ans[pq.top().second] = s;
            pq.pop();
            i++;
        }
        return ans;
    }
};