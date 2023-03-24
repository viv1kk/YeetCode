class Solution {
public:
    
    vector<vector<int>>ans;
    void f(vector<int>& c, int t, int ind, vector<int>&curr, vector<vector<int>>&res)
    {
        if(t == 0){
            res.push_back(curr);
            return;
        }
        if(ind < 0 || ind >= c.size() || t < 0) return;
        
        curr.push_back(c[ind]);
        f(c, (t-c[ind]), ind, curr, res);
        curr.pop_back();
        f(c, t, ind+1, curr, res);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<int>curr;
        vector<vector<int>>res;
        f(c, t, 0, curr, res);
        return res;
    }
};