class Solution {
public:
    
    int largestInteger(int num) {
        string s = to_string(num);
        priority_queue<char>odd, even;
        
        for(auto i : s)
        {
            int x = i-'0';
            if(x%2 == 0) even.push(i);
            else odd.push(i);
        }
        
        string ans = "";
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            int x = s[i]-'0';
            if(x%2 == 0)
            {
                ans += even.top();
                even.pop();
            }
            else
            {
                ans += odd.top();
                odd.pop();
            }
        }
        return stoi(ans);
    }
};