class Solution {
public:
    int minimumSum(int num) {
        vector<int>a(4, 0);

        int ind = 0;
        int rem = 0;
        
        while(num != 0)
        {
            rem = num%10;
            a[ind++] = rem;
            num /= 10;
        }
        sort(a.begin(), a.end());
        
        int sum = a[0]*10+a[3];
        sum += a[1]*10+a[2];
        return sum;
    }
};