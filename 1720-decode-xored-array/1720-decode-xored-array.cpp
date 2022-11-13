class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans{first};     
        int d = encoded.size();
        for(int i = 0; i < d; i++)
        {
            int x = ans[i]^encoded[i];
            ans.push_back(x);
        }
        return ans;
    }
};