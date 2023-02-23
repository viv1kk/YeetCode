class Solution {
public:
    struct comp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second < b.second;
    }
};
    
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> cpq;
        priority_queue<pair<int, int>,vector<pair<int,int>>, comp>ppq;
        
        for(int i = 0; i < profits.size(); i++)
        {
            cpq.push({capital[i], profits[i]});
        }
        
        // for(int  i = 0; i < profits.size(); i++)
        // {
        //     cout<<cpq.top().first<<" "<<cpq.top().second<<endl;
        //     cpq.pop();
        // }
        
        int x = w;
        while(k--)
        {
            while(!cpq.empty() && cpq.top().first <= x)
            {
                ppq.push(cpq.top());
                cpq.pop();
            }
            if(!ppq.empty())
            {
                x += ppq.top().second;
                ppq.pop();
            }
        }
        return x;
    }
};