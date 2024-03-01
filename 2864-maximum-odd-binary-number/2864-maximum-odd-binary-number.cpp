class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ans = 0;
        int ones = count(s.begin(), s.end(), '1');
        
        int sz = s.size();
        string temp = "";
        while(ones > 1){
            temp += '1';
            ones--;
            sz--;
        }
        while(sz > 1){
            temp +='0';
            sz--;
        }
        if(ones >= 1)
            temp += '1';
        return temp;
    }
};