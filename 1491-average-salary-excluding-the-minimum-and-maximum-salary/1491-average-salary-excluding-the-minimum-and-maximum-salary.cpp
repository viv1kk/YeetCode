class Solution {
public:
    double average(vector<int>& salary) {
        int mx = salary[0], mn = salary[1];
        if(mx < mn)
        {
            swap(mx, mn);
        }
        int tot = 0;
        for(int i = 2; i < salary.size(); i++)
        {
            if(mn > salary[i])
            {
                tot += mn;
                mn = salary[i];
            }
            else if(mx < salary[i])
            {
                tot += mx;
                mx = salary[i];
            }
            else tot += salary[i];
        }
        double x = (double)tot/((double)salary.size()-2);
        return x;
    }
};