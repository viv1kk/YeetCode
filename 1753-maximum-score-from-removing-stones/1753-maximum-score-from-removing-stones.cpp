class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int count = 0;
        while(true)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            if(b == 0) break;
            if(a > 0 && b > 0)
            {
                pq.push(--a);
                pq.push(--b);
                count++;
            }
        }
        return count;
    }
};