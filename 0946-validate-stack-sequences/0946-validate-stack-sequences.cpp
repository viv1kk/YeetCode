class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int i = 0, j = 0;
        
        int m = pushed.size();
        int n = popped.size();
        
        while(i < m || j < n)
        {
            if(i < m)
            {
                if(j < n)
                {
                    if(pushed[i] != popped[j])
                    {
                        if(!st.empty() && st.top() == popped[j])
                        {
                            st.pop();
                            j++;
                        }
                        else
                            st.push(pushed[i++]);
                        
                    }
                    else
                    {
                        i++;
                        j++;
                    }
                }
                else
                {
                    return true;
                }
            }
            else
            {
                if(st.top() != popped[j])
                {
                    return false;
                }
                else{
                    st.pop();
                    j++;
                }
                
            }
        }
        return true;
    }
};