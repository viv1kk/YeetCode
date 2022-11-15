class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        unordered_map<int, int>mp1;
        unordered_map<int, int>mp2;
        
        for(auto i:nums1)
        {
            mp1[i]++;
        }
        for(auto i:nums2)
        {
            mp2[i]++;
        }
        
        vector<int>ans;        
        for(auto i : mp1)
        {
            auto it = mp2.find(i.first);
            if(it != mp2.end())
            {
                int x = (i.second <= it->second)?i.second:it->second;
                while(x--)
                {
                    ans.push_back(i.first);
                }
            }
            else
            {
                continue;
            }
        }
        
        return ans;
    }
};