class Solution {
public:

    vector<string>ans;
    
    void f(int n,  string a, int l)
    {
        stack<char>stk;
        for(int i = 0; i < l; i++)
        {
            bool em = stk.empty();
            if(em && a[i] == ')') return;
            if(a[i] == '(') stk.push('(');
            else if(!em && stk.top() == '(' && a[i] == ')')stk.pop(); 
        }
        if(n == 0)
        {
            if(stk.empty()) ans.push_back(a);
            return;
        }

        f(n-1,a+'(', l+1);        
        f(n-1, a+')',l+1);
    }
    
    vector<string> generateParenthesis(int n) {
        f((2*n), "", 0);
        return ans;
    }
};