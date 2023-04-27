class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        vector<int> n;
        int j = 0;
        while(x != 0)
        {
            int temp = x%10;
            n.push_back(temp);
            j++;
            x = x/10;
        }
        
        for(int i = 0, k = j-1; i < k; i++, k--)
        {
            if(n[i] != n[k])
            {
                return false;
            }
        }
        return true;
    }
};