class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int count = 0;
        set<string> st;
        for(int i = 0; i < emails.size(); i++)
        {
            string s = "";
            bool d = false;
            bool pl = false;
            for(int j = 0; j < emails[i].length(); j++)
            {
                if(emails[i][j] == '@')
                    d = true;
                if(!d)
                {
                    if(pl) continue; 
                    else if(emails[i][j] == '.') continue;
                    else if(emails[i][j] == '+'){ pl = true; continue;}
                }
                s += emails[i][j];
            }
            st.insert(s);
        }
        return st.size();
    }
};