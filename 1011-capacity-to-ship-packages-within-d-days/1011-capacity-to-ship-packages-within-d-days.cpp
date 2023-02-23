class Solution {
public:
    
    int f(vector<int>&weights, int cap)
    {
        int count = 1;
        int sum = 0;
        for(int i = 0; i < weights.size(); i++)
        {
            if(sum+weights[i] > cap)
            {
                count++;
                sum = 0;
            }
            sum += weights[i];
        }
        return count;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int mn = 0;
        for(auto i : weights)
        {
            mn = max(mn, i);
            sum += i;
        }
        
        int l = mn, h = sum;
        int ans = h;
        while(l <= h)
        {
            int mid = l+(h-l)/2;
            
            int x = f(weights, mid);
            if(x <= days)
            {
                ans = mid;   
                h = mid-1;
            }
            else
                l = mid+1;
        }
     return ans;   
    }
};