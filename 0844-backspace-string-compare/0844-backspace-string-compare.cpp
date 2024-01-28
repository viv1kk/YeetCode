class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int c = 0;
        string a = "", b = "";
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == '#'){c++;}
            else if(c > 0){
                c--;
            }
            else{
                a+=s[i];
            }
        }
        c = 0;
        for(int i = t.length()-1; i >= 0; i--){
            if(t[i] == '#'){c++;}
            else if(c > 0){
                c--;
            }
            else{
                b+=t[i];
            }
        }
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        // cout<<a<<" "<<b<<endl;
        return a==b;
    }
};