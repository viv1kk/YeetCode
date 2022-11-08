class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> v;
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > max)
                max = candies[i];
        }
        for(int i = 0; i < candies.size(); i++)
        {
            v.push_back((candies[i]+extraCandies >= max));
        }
        return v;
    }
};