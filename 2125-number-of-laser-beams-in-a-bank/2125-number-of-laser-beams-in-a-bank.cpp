class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int beams = 0;
        int dev = 0;
        for(int i = 0; i < n; i++)
        {
            int row = count(bank[i].begin(), bank[i].end(), '1');
            beams += dev*row;
            if(row > 0) dev = row;
        }
        return beams;
    }
};