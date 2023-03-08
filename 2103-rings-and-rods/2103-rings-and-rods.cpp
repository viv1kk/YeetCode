class Solution {
public:
    int countPoints(string rings) {
        bool r[10] = {false};
        bool g[10] = {false};
        bool b[10] = {false};
        
        for(int i = 1; i < rings.size(); i+= 2)
        {
            int ind = rings[i]-'0';
            char x = rings[i-1];
            if(x == 'B') b[ind] = true;
            else if(x == 'R') r[ind] = true;
            else g[ind] = true;
        }
        int count = 0;
        for(int i = 0; i < 10; i++)
        {
            if(r[i] && g[i] && b[i]) count++;
        }
        return count;
    }
};