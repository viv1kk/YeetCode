class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int>pq;
        int count = 0;
        int curr_pos = 0;
        stations.push_back({target, 0});
        int n = stations.size();
        
        for(int i = 0; i < n; i++){
            if(startFuel >= stations[i][0]){
                pq.push(stations[i][1]);
            }
            else{
                while(startFuel < stations[i][0]){
                    if(pq.empty()) return -1;
                    startFuel += pq.top();
                    pq.pop();
                    count++;
                }
                pq.push(stations[i][1]);
            } 
            // curr_pos = stations[i][0];
        }
        return count;
    }
};