class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>a(n);
        
        for(int i = 1; i <=n; i++)
        {
            string ans = "";
            if(i % 3 == 0) ans += "Fizz";
            if(i % 5 == 0) ans += "Buzz";
            ans = (ans == "")?to_string(i):ans;
            a[i-1] = ans;
        }
        return a;
    }
};