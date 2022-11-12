class Solution {
public:

string longestPalindrome(string str) {
    string s= "$#";
    for(int i = 0; i < str.length(); i++)
    {
        s.push_back(str[i]);
        s.push_back('#');
    }
    s.push_back('@');
    
    vector<int> p(s.length(), 0);
    
    int l = 0, c = 0, r = 0;
    int mx = 0;
    for(int i = 1; i < s.length()-2; ++i)
    {
        if(i < r)p[i] = min(r-i, p[((2*c)-i)]);
        while(s[(i-p[i]-1)] == s[(i+p[i]+1)])p[i]++;
        if(p[i]+i > r) c = i, r= i+p[i] ; 
        if(p[i] >= mx)l = (i-p[i]-1)/2, mx = p[i];
    }
    string ans = str.substr(l, mx);
    return ans;
    }
};