class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        long long m = mass;
        sort(a.begin(), a.end());
        int n = a.size();
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= m)
                m +=a[i];
            else return false;
        }
        return true;
    }
};