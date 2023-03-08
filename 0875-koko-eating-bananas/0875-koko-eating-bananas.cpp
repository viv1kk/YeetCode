class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int x) {
        int l = 1;
        long h = *max_element(piles.begin(), piles.end());
        int n = piles.size();
        
        while(l <= h)
        {
            long mid = l+((h-l)>>1);
            long hours = 0;
            
            for(int i = 0; i < n; i++)
            {
                int a = piles[i];
                if(a <= mid){hours++; continue;}
                if(a%mid != 0) hours++;
                hours += a/mid;
            }
            if (hours > x)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return l;
    }
};