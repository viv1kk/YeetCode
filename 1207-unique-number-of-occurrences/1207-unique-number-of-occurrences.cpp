class Solution {

    public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        unordered_map<int, int>m;
        for(auto it : mp)
        {
            if(m.find(it.second) != m.end())
                return false;
            m[it.second]++;
                
        }
        return true;
    }
};