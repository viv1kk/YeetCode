class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int>mp;
        for(int i : arr){
            mp[i]++;
        }
        vector<int>f;
        for(auto[i, j] : mp){
            f.push_back(j);
        }
        sort(f.begin(), f.end());
        int n = f.size();
        int x = n;
        for(int i : f){
            if(k >= i){ k-=i; x--;}
            else return x;
        }
        return 0;
    }
};