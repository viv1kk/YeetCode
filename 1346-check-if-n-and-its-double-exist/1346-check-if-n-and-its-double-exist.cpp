class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]] = i;
        }
        for(int i = 0; i < arr.size(); i++)
        {
            auto it = mp.find(arr[i]*2);
            if(it != mp.end() && i != it->second) return true;
        }
        return false;
    }
};