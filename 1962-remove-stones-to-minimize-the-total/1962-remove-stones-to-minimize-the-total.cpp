class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        
        for(auto i : piles)
        {
            pq.push(i);
        }
        while(k--)
        {
            int temp = pq.top();
            temp -= floor(temp/2);
            pq.pop();
            pq.push(temp);
        }
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};