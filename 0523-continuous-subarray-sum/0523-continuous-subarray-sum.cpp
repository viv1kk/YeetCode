class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        // mp.insert({0,-1});
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(i != 0 && sum%k == 0) return true;
            auto it = mp.find((sum%k));
            if(it != mp.end() && i-(it->second) >= 2)
                return true;
            mp.insert({sum%k,i});
            // mp[(sum%k)] = i; 
        }
        return false;
    }
};
// BRUTEFORCE - GIVES TLE

// bool checkSubarraySum(vector<int>& nums, int k) {
//     for(int i = 0; i < nums.size(); i++)
//     {
//         int sum = nums[i];
//         for(int j = i+1; j < nums.size(); j++)
//         {    
//             sum += nums[j];
//             if(sum%k == 0)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }