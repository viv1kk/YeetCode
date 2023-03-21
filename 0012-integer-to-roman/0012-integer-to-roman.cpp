class Solution {
public:

    string convert(int x)
    {
        string t = "";
        if(x%5 == 4)
        {
            t += 'I';
            x++;
        }
        if(x%50 == 40)
        {
            t += 'X';
            x+=10;
        }
        if(x%500 == 400)
        {
            t += 'C';
            x+=100;
        }

        while(x >= 1000){
            t+='M';
            x -= 1000;
        }
        while(x >= 500 && x < 1000){
            t +='D';
            x-=500;
        }
        while(x >= 100 && x < 500){
            t +='C';
            x-=100;
        }
        while(x >= 50 && x < 100){
            t +='L';
            x-=50;
        }
        while(x >= 10 && x < 50){
            t +='X';
            x-=10;
        }
        while(x >= 5 && x < 10){
            t += 'V';
            x -= 5;
        }
        while(x > 0 && x < 5){
            t.insert(t.size(), x, 'I');
            x = 0;
        }
        return t;
    }
    
    string intToRoman(int num) {
        string ans = "";        
        string n = to_string(num);
        int i = 0;
        
        long x = pow(10,(n.length()-1));
        
        while(i < n.length()){
            if(n[i] != '0')
                ans += convert((n[i]-'0')*x);
            x /= 10;
            i++;
        }
        return ans;
    }
};