class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        // int WT = 0;
        // vector<int>W;
        unsigned long long e = 0;
        unsigned long long sum = 0;
        e = customers[0][0]+customers[0][1];
        sum = e-customers[0][0];
        for(int i = 1; i < customers.size(); i++)
        {
            int t = customers[i][0]+customers[i][1];
            if(e > customers[i][0])
                t += e-customers[i][0];
            e = t;
            sum += e-customers[i][0];
            cout<<e<<' ';
        }
        return ((double)sum/(double)customers.size());
    }
};