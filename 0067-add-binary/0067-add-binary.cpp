class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        int rem = 0;
        
        if(a.size() < b.size())
        {
            swap(a, b);
        }
        
        string ans = "";
        
        for(int i = 0; i < b.size(); i++)
        {
            int x = a[i]-'0';
            int y = b[i]-'0';
            ans += '0'+(x^y^rem);            
            rem = ((x&y) ||(x&rem) || (y&rem));
        }
        
        for(int i = b.size(); i < a.size(); i++)
        {
            int x = a[i]-'0';
            ans += '0'+(x^rem);
            rem = (x&rem);
        }
        if(rem == 1)
            ans +='1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};