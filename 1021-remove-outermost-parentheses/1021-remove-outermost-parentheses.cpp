class Solution {
public:
    string removeOuterParentheses(string s) {
        int x = 0;
        int flag = 0;
        int bal = 0;
        int n = s.length();
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                if(flag == 0){
                    x = i;
                    flag = 1;
                }
                bal++;
            }
            else if(s[i] == ')'){
                bal--;
                if(bal==0)
                {
                    s.erase(i, 1);
                    s.erase(x, 1);
                    flag = 0;
                    i-=2;
                }
            }
        }
        return s;
    }
};