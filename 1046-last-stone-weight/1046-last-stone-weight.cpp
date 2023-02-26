class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        
        for(int i : stones)
        {
            pq.push(i);
        }
        int ans= 0;
        while(!pq.empty())
        {
            int x = pq.top(), y = x;
            pq.pop();
            
            if(!pq.empty())
            {
                y = pq.top();
                pq.pop();
            }
            else
            {
                return x;
            }
            
            if(x > y) pq.push(x-y);
            else if(x == y && pq.empty()) return 0;
        }
        return pq.top();
    }
};