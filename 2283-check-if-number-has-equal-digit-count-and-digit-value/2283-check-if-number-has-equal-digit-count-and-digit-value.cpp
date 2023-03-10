class Solution {
public:
    bool digitCount(string num) {
        for(int i = 0; i < num.length(); i++)
        {
            if(count(num.begin(), num.end(),'0'+i) != num[i]-'0')
                return false;
        }
        return true;
    }
};