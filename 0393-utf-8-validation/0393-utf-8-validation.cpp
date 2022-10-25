class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int i = 0;
        int count = 0;
        while(i < data.size())
        {
            int d = data[i];
            if(count == 0)
            {
                if((d>>3) == 30) count = 3;
                else if((d>>4) == 14) count = 2;
                else if((d>>5) == 6) count  = 1;
                else if((d>>7) == 0) count = 0;
                else return false;
                i++;
            }
            else{
                if((d>>6) == 2) count--;
                else return false;
                i++;
            }
        }
        if(count != 0) return false;
        return true;
    }
};