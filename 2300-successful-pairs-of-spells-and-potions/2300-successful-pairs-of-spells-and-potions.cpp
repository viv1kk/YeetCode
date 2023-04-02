class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        
        vector<int>ans;
        
        int n = spells.size();

        int m = potions.size();
        
        for(int i = 0; i < n; i++)
        {
            long long a = m;
            int l = 0;
            int r = m-1;
            while(l <= r)
            {
                int mid = l+(r-l)/2;
                long long x = (long long)spells[i]*(long long)potions[mid];
                
                if(x >= success)
                {
                    a = mid;
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            ans.push_back(m-a);
        }
        return ans;
    }
};