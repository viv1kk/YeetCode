class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>v;
        if(finalSum%2) return v;
        
        int x = 2;
        while(finalSum >= x)
        {
            finalSum -= x;
            v.push_back(x);
            x += 2;
        }
        v.back()+=finalSum;
        return v;
    }
};