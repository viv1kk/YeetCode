class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>st(banned.begin(), banned.end());
        banned = vector(st.begin(), st.end());
        sort(banned.begin(), banned.end());

        int count = 0;
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(st.find(i) == st.end())
             {
                sum += i;
                count++;
             }
             if(sum >= maxSum)
             {
                if(sum > maxSum)
                    count--;
                break;
             }
        }
        return count;
    }
};