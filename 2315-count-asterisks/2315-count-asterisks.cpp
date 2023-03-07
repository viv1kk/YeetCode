class Solution {
public:
    int countAsterisks(string s) {
        bool x = true;
        int count = 0;
        
        for(auto i : s)
        {
            if(i == '|')
                x = !x;
            if(x && i == '*')count++;
        }
        return count;
    }
};