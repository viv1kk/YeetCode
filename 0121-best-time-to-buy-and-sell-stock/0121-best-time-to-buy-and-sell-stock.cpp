class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mp = 0;
        
        int lr[n];
        int rr[n];
        
        int mx = prices[n-1];
        int mn = prices[0];
        for(int i = n-1; i >= 0 ; i--)
        {
            if(prices[i] > mx) mx = prices[i];
            lr[i] = mx;
            // cout<<lr[i]<<", ";
        }
        // cout<<endl;
        for(int i = 0; i < n; i++)
        {
            if(prices[i] < mn) mn = prices[i];
            rr[i] = mn;
            // cout<<rr[i]<<", ";
        }
        
        int m = 0;
        for(int i = 0; i < n; i++)
        {
            m = (m < lr[i]-rr[i])? lr[i]-rr[i]:m;
        }
        
        if(m < 1)
            return 0;
        return m;
        
    }
};