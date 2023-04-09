class Solution {
public:
    bool canPlaceFlowers(vector<int>&f, int n) {
        
        int p = 0;
        int fr = 1;
        int s = f.size();
        for(int i = 0; i < s; i++)
        {
            if(f[p] == 0 && (fr == s || f[fr] == 0) && f[i] == 0)
            {
                f[i++] = 1;
                n--; fr++;
            }
            p=i;
            fr++;
        }
        return (n <= 0);
    }
};