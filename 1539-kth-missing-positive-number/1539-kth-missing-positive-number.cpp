class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        for(auto i : arr){
            if(i <= k) k++;
        }
        return k;
    }
    
};