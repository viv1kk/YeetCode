class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int>pq;
        int n = h.size();
        int sum = 0;
        int  i = 0;
        for(; i < n-1; i++){
            int d = h[i+1]-h[i];
            if(d > 0){
                pq.push(d);
                sum += d;
                if(sum > b){
                    if(l > 0){
                        l--;
                        sum -= pq.top();
                        pq.pop();
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return i;
    }
};