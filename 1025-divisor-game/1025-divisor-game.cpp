class Solution {
public:
    bool divisorGame(int n) {
        int temp = n;
        int count = 0;
        if(n == 1) return false;
        for(int x = n-1; x > 0; x--)
        {
            if(n%x == 0)
            {
                n -= x;
                x = 1;
                count++;
            }
        }
        return (count%2 != temp%2);
            
    }
};