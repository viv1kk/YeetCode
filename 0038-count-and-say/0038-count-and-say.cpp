class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string s = countAndSay(n-1);
        
        int count = 1;
        char x = s[0];
        string a = "";
        for(int i = 1; i < s.length(); i++){
            if(x == s[i])count++;
            else{
                a+= to_string(count);
                a+= x;
                x = s[i];
                count = 1;
            }
        }
        a += to_string(count);
        a += x;
        return a;
    }
};