class Solution {
public:
    int maximum69Number (int num) {
        vector<char>dig;
        while(num != 0)
        {
            int rem = num%10;
            dig.push_back('0'+rem);
            num /= 10;
        }
        int flag = 0;
        int ans = 0; 
        for(int i = dig.size()-1; i >= 0; --i)
        {
            if(flag == 0 && dig[i] == '6')
            {
                dig[i] = '9';
                flag = 1;
            }
            ans *= 10;
            ans += dig[i]-'0';
        }
        return ans;
    }
};