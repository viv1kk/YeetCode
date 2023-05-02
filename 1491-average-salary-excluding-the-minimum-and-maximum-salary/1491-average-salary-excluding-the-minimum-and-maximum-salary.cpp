class Solution {
public:
    double average(vector<int>& salary) {
        int mn = *min_element(salary.begin(), salary.end());
        int mx = *max_element(salary.begin(), salary.end());
        
        int tot = 0;
        for(int i = 0; i < salary.size(); i++)
        {
            tot += salary[i];
        }
        tot -= (mx+mn);
        return (double)((double)tot/((double)salary.size()-2));
    }
};