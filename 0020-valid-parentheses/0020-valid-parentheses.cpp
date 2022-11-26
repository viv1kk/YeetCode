class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char>st;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                char t = st.top();
                if((t == '[' && s[i] == ']')||(t == '{' && s[i] == '}')||(t == '(' && s[i] == ')'))
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        return st.empty();
    }
};