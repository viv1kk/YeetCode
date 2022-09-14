class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int sz = data.size();
        int j=0;
        int count = 0;
        while(j < sz)
        {
            int d = data[j];
            
            if(count == 0)
            {
                if((d>>(7-4)) == 30)count = 3;
                else if((d>>(7-3)) == 14)count = 2;
                else if((d>>(7-2)) == 6)count = 1;
                else if((d>>7) == 0)count = 0;
                else return false;  
            }
            else
            {
                if((d>>6) != 2)return false;
                --count;
            }
            ++j;
        }   
        if(count)
            return false;
        return true;
    }
};