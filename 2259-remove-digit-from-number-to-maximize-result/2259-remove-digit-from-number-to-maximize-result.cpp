class Solution {
public:
    string removeDigit(string number, char digit) {
        int flag = -1;
        for(int i = 0; i < number.length()-1; i++)
        {
            if(number[i] == digit && number[i+1] > digit)
            {
                flag = i;
                break;
            }
        }
        
        if(flag > -1)
        {
            number.erase(flag, 1);
            return number;
        }
        if(number[number.length()-1] == digit)
        {
           number.erase(number.length()-1, 1);
            return number; 
        }
        
        for(int i = number.length()-1; i >= 0; i--)
        {
            if(number[i] == digit)
            {
                number.erase(i, 1);
                return number;
            }
        }
        
        return number;
    }
};