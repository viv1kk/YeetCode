class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int>ans(n);
        stack<int>st;
        
        for(int i = 0; i < n; i++)
        {
            if(st.empty()){
                st.push(i);
            }
            else{
                if(t[st.top()] < t[i]){
                    while(!st.empty() && t[st.top()] < t[i]){
                        ans[st.top()] = i-st.top();
                        st.pop();
                    }
                }
                st.push(i);
            }
        }
        
        return ans;
    }
};