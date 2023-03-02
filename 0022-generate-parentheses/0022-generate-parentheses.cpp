class Solution {
public:

    vector<string>ans;
    
    void f(int n,  string a)
    {
        stack<char>stk;
        for(int i = 0; i < a.length(); i++)
        {
            if(stk.empty() && a[i] == ')') return;
            if(a[i] == '(') stk.push('(');
            else if(!stk.empty()&& stk.top() == '(' && a[i] == ')')stk.pop(); 
        }
        if(n == 0)
        {
            if(stk.empty()) ans.push_back(a);
            return;
        }

        f(n-1,a+'(');        
        f(n-1, a+')');
    }
    
    vector<string> generateParenthesis(int n) {
        f((2*n), "");
        return ans;
    }
};