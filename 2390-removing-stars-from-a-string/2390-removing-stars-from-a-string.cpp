class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                if((s[i] == '*' && st.top() != '*') || s[i] != '*' && st.top() == '*')
                    st.pop();
                else 
                    st.push(s[i]);
            }
        }
        s = "";
        while(!st.empty())
        {
            s += st.top();
            st.pop();
        }
        return string(s.rbegin(), s.rend());
    }
};