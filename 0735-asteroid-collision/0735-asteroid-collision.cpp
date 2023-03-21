class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        stack<int>st;
        int i = 0;
        while(i < n)
        {
            if(st.empty())
                st.push(a[i]);
            else
            {
                int x = st.top();
                if((x > 0 && a[i] < 0))
                {
                    if(abs(a[i]) > x) { i--; st.pop(); }
                    else if(abs(a[i]) == x) st.pop();
                }
                else st.push(a[i]);
            }
            i++;
        }
        n = st.size();
        vector<int>res(n);
        for(int i = n-1; i >= 0; i--) {
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};