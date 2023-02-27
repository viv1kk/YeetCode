class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq(amount.begin(), amount.end());
        int count = 0;
        
        while(pq.top() > 0)
        {
            int x = pq.top()-1;
            pq.pop();
            if(pq.top() > 0)
            {
                int y = pq.top()-1;
                pq.pop();
                pq.push(y);
            }
            pq.push(x);
            count++;
        }
        return count;
    }
};