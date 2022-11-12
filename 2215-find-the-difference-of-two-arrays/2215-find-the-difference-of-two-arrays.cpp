class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_map<int, int>mp;
        unordered_map<int, int>mp2;

        for(int i = 0; i < nums1.size(); i++)
        {
            auto it = mp.find(nums1[i]);
            if(it == mp.end())
                mp[nums1[i]]++;
            else
            {
                nums1.erase(nums1.begin()+i, nums1.begin()+1+i);
                --i;
            }
        }
        for(int i = 0; i < nums2.size(); i++)
        {
            mp2[nums2[i]]++;
            auto it = mp.find(nums2[i]);
            if(it == mp.end())
                mp[nums2[i]]++;
            else
            {
                nums2.erase(nums2.begin()+i, nums2.begin()+i+1);
                --i;
            }
        }
    
        for(auto i : nums1)
        {
            cout<<i<<", ";
        }
        for(int i = 0; i < nums1.size(); i++)
        {
            auto it = mp2.find(nums1[i]);
            if(it != mp.end())
            {
                nums1.erase(nums1.begin()+i, nums1.begin()+1+i);
                --i;
            }
        }
        ans.push_back(nums1);
        ans.push_back(nums2);
        return ans;
    }
};