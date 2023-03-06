class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        for(int i : arr){
            if(i <= k) k++;
        }
        return k;
    }
    
};