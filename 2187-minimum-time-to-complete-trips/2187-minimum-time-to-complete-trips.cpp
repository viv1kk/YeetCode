class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 1, h = LLONG_MAX/time.size();
        while(l < h)
        {
            long long mid = l+(h-l)/2, sum = 0;
            for(auto i : time) sum+=mid/i;
            if(sum < totalTrips)
                l = mid+1;
            else h = mid;
        }
        return h;
    }
};