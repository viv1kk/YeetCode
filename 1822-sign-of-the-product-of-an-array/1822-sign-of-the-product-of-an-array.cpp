class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        bool z = 0;
        for(int i : nums)
        {
            count += (i < 0);
            z = z|(i == 0);
        }
        if(z) return 0;
        return ((count%2 == 0)?1:-1);
    }
};