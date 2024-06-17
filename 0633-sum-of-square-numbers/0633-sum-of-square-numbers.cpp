class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0, r = sqrt(c)+1;
        
        while(l <= r){
            long long x = (l*l)+(r*r);
            if(x == c) return true;
            else if(x < c){
                l++;
            }
            else r--;
        }
        return false;
    }
};