class Solution {
public:
    
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> cpq;
        priority_queue<pair<int, int>>ppq;
        
        for(int i = 0; i < profits.size(); i++)
        {
            cpq.push({capital[i], profits[i]});
        }
        
        int x = w;
        while(k--)
        {
            while(!cpq.empty() && cpq.top().first <= x)
            {
                auto[x, y] = cpq.top();
                ppq.push({y, x});
                cpq.pop();
            }
            if(!ppq.empty())
            {
                x += ppq.top().first;
                ppq.pop();
            }
        }
        return x;
    }
};