class Solution {
public:
    int twoEggDrop(int n) {
        int i = n, r = 0;
        while(i > 0){
            r++;
            i-=r;
        }
        return r;
    }
};