class Solution {
public:
    int countAsterisks(string s) {
        bool x = true;
        int count = 0;
        
        for(auto i : s)
        {
            if(x && i == '*')count++;
            if(i == '|') x = !x;
        }
        return count;
    }
};