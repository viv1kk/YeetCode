class Solution {
public:
    int nthUglyNumber(int n) {
        
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        
        long long top;
        pq.push(1);
        while(n--)
        {
            top = pq.top();
            while(!pq.empty() && pq.top() == top) pq.pop();
            pq.push(2*top);
            pq.push(3*top);
            pq.push(5*top);
        }
        return top;
    }
};