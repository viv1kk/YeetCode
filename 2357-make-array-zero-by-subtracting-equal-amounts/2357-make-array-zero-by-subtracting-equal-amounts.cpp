class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>>pq(nums.begin(), nums.end());
        
        int mn = 0, count = 0;
        while(!pq.empty())
        {
            if(pq.top() == 0) pq.pop();
            else{
                int x = pq.top()-mn;
                if(x != 0)
                {
                    mn += x;
                    count++;
                }
                pq.pop();
            }
        }
        return count;
    }
};