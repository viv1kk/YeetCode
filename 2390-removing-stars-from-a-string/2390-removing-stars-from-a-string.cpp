class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(auto i : s){
            if(st.empty())
                st.push(i);
            else
            {
                if((i == '*' && st.top() != '*' )|| (i != '*' && st.top() == '*' ))
                    st.pop();
                else
                    st.push(i);
            }
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