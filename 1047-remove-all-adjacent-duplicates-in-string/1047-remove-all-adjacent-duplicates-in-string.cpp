class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        // int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if(st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};