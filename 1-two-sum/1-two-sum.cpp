class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        
        vector<pair<int,int> > temp;
        
        for(int i=0; i<nums.size();i++)
        {
            temp.push_back(make_pair(nums[i],i));
        }
            
        sort(temp.begin(), temp.end());
        
        int i = 0, j = nums.size()-1;
        
        while(i < j)
        {
            int d = temp[i].first + temp[j].first;
            if(d == target)
            {
                x.push_back(temp[i].second);
                x.push_back(temp[j].second);
                return x;
            }
            else if(d < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return x;
    }
};