class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        int n = arr.size();
        for(int i = 0; i < n-1; i++)
        {
            int ind = max_element(arr.begin()+i+1, arr.end())-arr.begin();
            
            while(ind > i)
            {
                ans.push_back(arr[ind]);
                i++;
            }
            i--;
        }
        ans.push_back(-1);
        return ans;
    }
};