class Solution {
public:
    string reverseWords(string s) {
        
        int i = 0, j = s.length()-1;
        while(s[i] == ' ')i++;
        while(s[j] == ' ')j--;
        
        int count = 0;
        string ans = "";
        vector<string>a;
        while(i <= j)
        {
            if(s[i] == ' ')
            {
                if(s[i] != s[i-1])
                    a.push_back(ans);
                ans = "";
                i++;
                continue;
            }
                
            ans+=s[i];
            i++;
        }
        a.push_back(ans);
        
        for(auto i: a)
            cout<<i;
        reverse(a.begin(), a.end());
        ans = "";
        for(int i = 0; i < a.size(); i++)
        {
            ans += a[i];
            ans += ' ';
        }
        ans.pop_back();
        
        return ans;
    }
};