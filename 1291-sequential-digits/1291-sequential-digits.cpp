class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int st = 1;
        while(st <= 9){
            long long c = 0;
            
            int i = 0;
            bool val = true;
            while(c <= high){
                if(val && c >= low && c <= high){
                    ans.push_back(c);
                }
                c *=10;
                c += st+i;
                if(st+i > 9){val = false; break;}
                i++;    
            }
            st++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};