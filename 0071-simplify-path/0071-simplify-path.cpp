class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string s = "";
        path += '/';
        for(int i = 0; i < path.size(); i++)
        {
            if(s != "" && path[i] == '/')
            {
                int x = count(s.begin(), s.end(), '.');
                if(x == s.length())
                {
                    if(x < 3)
                    {
                        if(!st.empty() && x == 2) st.pop();
                        s = "";
                    }
                    else
                        st.push(s);
                }
                else
                    st.push(s);
                s = "";
            }
            else
            {
                if(path[i] == '/')continue;
                else
                    s += path[i];
            }
        }
        string ans = "";
        while(!st.empty())
        {
            ans.insert(0, st.top());
            ans.insert(0, "/");
            st.top();
            st.pop();
        }
        if(ans == "")
            ans = "/";
        return ans;
    }
};