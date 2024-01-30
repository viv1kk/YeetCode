class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        
        set<string>s= {"+", "-", "/", "*"};
        for(auto &i : tokens){
            if(s.find(i) == s.end()){
                st.push(stoi(i));
            }
            else{
                int f = st.top();
                st.pop();
                int l = st.top();
                st.pop();
                if(i == "+") st.push(l+f);
                else if(i == "-") st.push(l-f);
                else if(i == "*") st.push(l*f);
                else st.push(l/f);
            }
        }
        return st.top();
    }
};