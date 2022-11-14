class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        reverse(d.begin(), d.end());
        int c = 1;
        
        int i = 0;
        while(c != 0 &&  i < d.size())
        {
            if(d[i] == 9)
            {
                d[i] = 0;
                i++;
                continue;
            }
            d[i]++;
            c--;
            i++;
        }
        if(i == d.size()  && c > 0)
            d.push_back(1);
        reverse(d.begin(), d.end());
        return d;
    }
};