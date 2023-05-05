class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> v = {'a','e','i','o','u'};
        
        int i =  0, j = k-1;
        
        int mx = 0;
        int cm = 0;
        
        for( i = 0; i <= j; i++)
        {
            if(v.find(s[i]) != v.end())
            {
                cm++;
            }
        }
        mx = cm;
        i = 0;
        for( ; j < s.length()-1; i++, j++)
        {
            if(v.find(s[i]) != v.end())
            {cm--;}
            if(v.find(s[j+1]) != v.end())
            {cm++;}
            mx = max(mx, cm);
        }
        return mx;
    }
};