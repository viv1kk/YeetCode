class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int>ans(n);
        

        for(int i = 0; i < n; i++)
        {
            int t = 0;
            for(int j = 0 ; j < n; j++)
            {
                if(boxes[j] == '1')
                    t += abs(i-j);
            }
            ans[i] = t;
        }
        return ans;
    }
};