class Solution {
public:
    vector<int> shuffle(vector<int>& n, int nd) {
        vector<int>ans;
        for(int i = 0, j = nd; i < nd; i++, j++)
        {
            ans.push_back(n[i]);
            ans.push_back(n[j]);
        }
        return ans;
    }
};