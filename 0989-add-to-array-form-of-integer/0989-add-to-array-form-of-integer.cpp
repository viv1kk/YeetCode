class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(), num.end());
        int carry = 0;
        int n = num.size();
        int i = 0;
        while(k > 0 || i < n)
        {
            int rem = k%10;
            if(i >= n)
            {
                int sum = (carry+rem);
                num.push_back(sum%10);
                carry = (sum > 9)?1:0;
            }
            else
            {
                int sum = (num[i]+rem+carry);
                num[i] = sum%10;
                carry = (sum > 9)?1:0;
            }

            k = k/10;
            i++;
        }
        if(carry == 1)
            num.push_back(1);
        reverse(num.begin(), num.end());
        return num;
    }
};