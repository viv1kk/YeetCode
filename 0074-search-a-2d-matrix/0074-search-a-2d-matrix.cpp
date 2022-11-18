class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n = m.size();
        for(int i = 0; i < n; i++)
        {
            int s = 0, e = m[i].size()-1;
            
            while(s <= e)
            {
                int mid = s+((e-s)>>1);
                
                if(m[i][mid] == t)
                {
                    return true;
                }
                else if(m[i][mid]<t)
                {
                    s = mid+1;
                }
                else
                {
                    e = mid-1;
                }
            }
        }
        return false;
    }
};