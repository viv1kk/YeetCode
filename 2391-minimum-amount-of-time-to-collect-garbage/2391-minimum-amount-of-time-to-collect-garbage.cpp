class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        
        int tm = 0;
        int tg = 0;
        int tp = 0;
        
        int im = 0;
        int ig = 0;
        int ip = 0;
        for(int i = 0; i < n; i++)
        {
            for(auto j : garbage[i])
            {
                if(j == 'M')
                {
                    tm++;
                    im = i;
                }
                else if(j == 'G') 
                {
                    tg++;
                    ig = i;
                }   
                else
                {
                    tp++;
                    ip = i;
                }
            }
        }
        
        for(int i = 0; i < n-1; i++)
        {
            if(i < im)tm+=travel[i];
            if(i < ig)tg+=travel[i];
            if(i < ip)tp+=travel[i];
        }
        
        return tm+tg+tp;
    }
};