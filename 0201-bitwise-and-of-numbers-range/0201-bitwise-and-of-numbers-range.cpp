class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int i = 31;
        bool x = true;
        int ans = 0;
        while(i >= 0){
            ans = (ans << 1);
            int l = (left&(1<<i));
            int r = (right&(1<<i));
            if(x){
                if(l == r) ans += !(l == 0); 
                else return (ans<<i);
            }
            i--;
        }
        return ans;
    }
};