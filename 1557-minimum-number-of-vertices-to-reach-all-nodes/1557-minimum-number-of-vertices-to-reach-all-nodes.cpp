class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int, int>f, t;
        for(int i = 0; i < edges.size(); i++)
        {
            f[edges[i][0]]++;
            t[edges[i][1]]++;
            
            if(t.find(edges[i][0]) != t.end())
            {
                f.erase(edges[i][0]);
            }
            if(f.find(edges[i][1]) != f.end())
            {
                f.erase(edges[i][1]);
            }
        }
        vector<int>ans;
        for(auto i :f)
        {
            ans.push_back(i.first);
        }
        return ans;
    }
};