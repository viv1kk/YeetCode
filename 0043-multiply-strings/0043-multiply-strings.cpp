class Solution {
public:
    
    string add(vector<string> v)
    {
        int carry = 0;
        int mxSize = 0;
        string res = "";
        for(auto &i : v) mxSize = max(mxSize, (int)i.length());
        for(int i = 0; i < mxSize; i++)
        {
            int ans = 0;
            ans += carry;
            int j = 0;
            while(j < v.size())
            {
                if(i >= v[j].length()){j++; continue;}
                ans += (v[j][i]-'0');
                j++;
            }
            carry= ans/10;
            res += to_string(ans%10);
        }
        
        if(carry) res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
    
    
    vector<string> mul(string &num1, string &num2)
    {
        vector<string>ans;
        
        for(int i = 0; i < num2.length(); i++)
        {
            int carry = 0;
            string s = "";
            s.insert(s.begin(), i, '0');
            
            for(int j = 0; j < num1.length(); j++)
            {
                int n =(num1[j] - '0')*(num2[i]-'0');
                n += carry;
                
                carry = n/10;
                s += to_string(n%10);
            }
            if(carry) s += to_string(carry);
            ans.push_back(s);
        }
        return ans;
    }
    
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        vector<string> ans = mul(num1, num2);
        return add(ans);
    }
};