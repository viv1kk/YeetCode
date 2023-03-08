class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int x) {
        int l = 1;
        int h = INT_MAX;
        int n = piles.size();
        
        while(l <= h)
        {
            int mid = l+(h-l)/2;
            int hours = 0;
            
            for(int i = 0; i < n; i++)
            {
                if(piles[i] <= mid){hours++; continue;}
                if(piles[i]%mid != 0) hours++;
                hours += piles[i]/mid;
            }
            if (hours > x)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return l;
    }
};