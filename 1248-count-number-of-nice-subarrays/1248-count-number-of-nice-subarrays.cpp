class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        
        int t = 0, c= 0, j = 0;
        int odd= 0;
        for(int i = 0; i < n; i++)
        {
            if((nums[i]&1))
            {
                odd++;
                if(odd >= k)
                {
                    c = 1;
                    while((nums[j++]&1) == 0)c++;
                    t += c;
                }
            }
            else if(odd>=k)
            {
                t += c;
            } 
        }
        return t;   
    }
};