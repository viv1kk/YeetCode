class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(char i : n){
            if((ans = max(ans, i-'0')) == 9)break;
        }
        return ans;
    }
};