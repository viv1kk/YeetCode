class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int pi = 0;
        int fi = 1;
        int s = f.size();
        
        for(int i = 0; i < s; i++)
        {
            if(f[pi] == 0 && (fi ==  s || f[fi] == 0) && f[i] == 0 && n != 0)
            {
                f[i++] = 1;
                n--; fi++;
            }
            fi++;
            pi = i;
        }
        return n <= 0;
    }
};