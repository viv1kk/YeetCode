class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        
//****************************************************************************************
        // create the Number String;
        bool sign =  true;
        string num = "";
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(flag == 0 && s[i] != ' ')
            {
                if(s[i]=='-') sign = false;
                else if(s[i] == '+') sign = true; // false == negative;
                else if(s[i] >='0' && s[i] <= '9') num += s[i];
                else return 0;
                flag = 1;
                continue;
            }
            if(flag == 1)
            {
                if(s[i] >= '0' && s[i] <= '9')
                    num += s[i];
                else
                    break;
            }
        }
//************************************************************************************
        // remove tailing zeros;
        int i = 0;
        while(num[i++] == '0'){}
        string temp= "";
        i--;
        while(i < num.length())
        {
            temp += num[i++];
        }
        num = temp;
        n = num.length();
//***********************************************************************************
        // cout<<num<<" "<<num.length()<<endl;
        //if only '-' in str return  0;
        if(num == "") return 0;
//***************************************************************************************
        long ans = 0;
        i = 0;
        while(i < n)
        {
            ans *= 10;
            ans = (abs(ans)+(num[i]-'0'));
            if(ans >= 0  && sign == false)
                ans *= -1;
            if(ans >= INT_MAX)return INT_MAX;
            if(ans <= INT_MIN)return INT_MIN;
            i++;
        }
        return (int)ans;
    }
};