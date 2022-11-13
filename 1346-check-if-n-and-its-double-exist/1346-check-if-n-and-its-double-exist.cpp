class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(int i = 0; i < arr.size(); i++){
            mp.insert({arr[i], i});
        }
        for(int i = 0; i < arr.size(); i++){
            auto it = mp.find(2*arr[i]);
            if(it != mp.end() && it->second != i)
                return true;
        }
        return false;
    }
};