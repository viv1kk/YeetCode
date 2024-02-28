class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),  [&](vector<int>&a, vector<int>&b){
            return a[1] < b[1];
        });
        
        int e = intervals[0][1];
        int n = intervals.size();
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(intervals[i][0] < e){
                ans++;
                continue;
            }
            e = intervals[i][1];
        }
        return ans;
    }
};