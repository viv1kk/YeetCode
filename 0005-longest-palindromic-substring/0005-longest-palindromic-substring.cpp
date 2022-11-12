class Solution {
public:

string longestPalindrome(string str) {
    string s= "";
    s.push_back('@');
    for(int i = 1, j = 0; i < (2*str.length())+2; i++)
    {
        if((i&1)== 1)
            s.push_back('#');
        else
            s.push_back(str[j++]);
    }

    s.push_back('$');
    // cout<<s;
    // cout<<s.length()<<endl;
    // cout<<str.length()<<endl;

    int strLen = s.length();
    int maxLen = 0;
    int start = 0;
    int maxRight = 0;
    int center = 0;

    vector<int>p(strLen, 0);
    for(int i = 1;i < strLen-1; i++)
    {
        // if(i < maxRight)
        //     p[i] = min(maxRight-i, p[((2*center) -i)]);
        while(s[(i+p[i]+1)] == s[(i-p[i]-1)])
            p[i]++;
        if(i+p[i] > maxRight){
            center = i; maxRight = i+p[i];
        }
        if(p[i] > maxLen){
            start = (i-p[i]-1)/2;
            maxLen = p[i];
        }
    }
    // cout<<endl<<maxLen;
    string ans = str.substr(start, maxLen);
    // cout<<endl;
    return ans;
    }
};