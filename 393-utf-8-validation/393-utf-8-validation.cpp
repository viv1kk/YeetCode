class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int i = data.size();
        int j=0;
        int count = 0;
        while(i--)
        {
            int d = data[j];
            
            if(count == 0)
            {
                if((d>>(7-4)) == 30)
                {
                    count = 3;
                    cout<<d<<" a, "<<count<<endl;
                }
                else if((d>>(7-3)) == 14)
                {
                    count = 2;
                    cout<<d<<" b, "<<count<<endl;
                }
                else if((d>>(7-2)) == 6)
                {
                    count = 1;
                    cout<<d<<" c, "<<count<<endl;
                }
                else if((d>>7) == 0)
                {
                    count = 0;
                    cout<<d<<" d, "<<count<<endl;
                }
                else
                {
                    cout<<d<<", "<<count<<endl;
                    return false;
                }
                    
            }
            else
            {
                cout<<count<<endl;
                d = data[j];
                if((d>>6) != 2)
                {
                    cout<<d<<" e, "<<count<<endl;
                    return false;
                }
                count--;
            }
            
            if(j + count  >= data.size())
                return false;
            j++;
        }   
        return true;
    }
};