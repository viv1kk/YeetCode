class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);
        
        int n = str.length();
        int imx = 0;
        int imn = 0;
        while(imx < n) if(str[imx] == '9')imx++; else break;
        while(imn < n) if(str[imn] == '0')imn++; else break;
     
        
        string mx = "", mn = "";
        if(imx != n)
        {
            int i = 0;
            char c = str[imx];
            while(i < n)
            {
                if(str[i] == c) mx += '9';
                else mx += str[i];
                i++;
            }
        }else return num;
        if(imn != n)
        {
            int i = 0;
            char c = str[imn];
            while(i < n)
            {
                if(str[i] == c) mn += '0';
                else mn += str[i];
                i++;
            }
        }
        return stoi(mx)-stoi(mn);
    }
};