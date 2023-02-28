class Solution {
public:
    void f(string &s)
    {
        std::reverse(s.begin(), s.end());
    }
    int reverse(int x) {
        string s = to_string(x);
        bool sign = true;
        
        if(s[0] == '-')
            sign = false;
        
        // if(sign == false)
        // {
        //     // s.push_back('-');
        // }
        f(s);
        if(sign == false)
        {
            s.pop_back();
        }
        f(s);
        cout<<s<<endl;
        long ans = 0;
        int i = s.length();
        while(i)
        {

            ans *= 10;
            ans = (abs(ans)+s[--i]-'0');
            if(ans >= 0  && sign == false)
            {
                ans *= -1;
            }
            if(ans > INT_MAX || ans < INT_MIN)
                return 0;
        }
        return (int)ans;
    }
};