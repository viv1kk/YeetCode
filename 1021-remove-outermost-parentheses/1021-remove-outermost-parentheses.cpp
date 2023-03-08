class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')st.push(i);
            if(s[i] == ')'){
                int top = st.top();
                st.pop();
                if(st.empty())
                {
                    s.erase(i, 1);
                    s.erase(top, 1);
                    i-=2;
                }
            }
        }
        return s;
    }
};