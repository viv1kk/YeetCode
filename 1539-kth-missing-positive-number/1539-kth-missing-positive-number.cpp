class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        for(int i = 1; i <= 2000; i++)
        {
            if(!binary_search(arr.begin(), arr.end(), i)) count++;
            if(count == k) return i;
        }
        return -1;
    }
    
};