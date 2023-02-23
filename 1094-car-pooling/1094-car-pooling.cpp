class Solution {
public:
    bool carPooling(vector<vector<int>>& trip, int c) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>> >p1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>> >p2;
        
        for(int i = 0; i < trip.size(); i++)
        {
            p1.push({trip[i][1], trip[i][0]});
            p2.push({trip[i][2], trip[i][0]});
        }
        
        bool ans = true;
        
        int currLoc = 0;
        int currPass = 0;
        while(currLoc < 1001)
        {
            // if(!p1.empty() && !p2.empty()) currLoc = min(p2.top().first, p1.top().first);
            while(!p2.empty() && currLoc == p2.top().first)
            {
                currPass -= p2.top().second;
                p2.pop();
            }
            
            while(!p1.empty() && currLoc == p1.top().first)
            {
                currPass += p1.top().second;
                p1.pop();
                if(currPass > c)
                {
                    ans = false;
                    break;
                }
            }
            
            if(!ans) break;
            currLoc++;
        }
        return ans;
    }
};