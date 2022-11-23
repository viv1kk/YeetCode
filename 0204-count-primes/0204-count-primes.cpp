class Solution {
public:
    int countPrimes(int n) {
        // if(n == 0) return 0;
        vector<int> v(n+2, 1);
        v[0] = 0;
        v[1] = 0;
        for(int i = 2; i*i < n; i++)
        {
            int ind = i;
            if(v[i] == 1)
            {
                while(ind+i < n)
                {
                    v[ind+i] = 0;
                    ind += i;
                }
            }
        }
        
        int c = 0; 
        for(int i = 0; i < n; i++)
        {
            c+=v[i];
        }
        
        return c;
    }
};