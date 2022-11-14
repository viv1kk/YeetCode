    
class Solution {
    bool static comp(pair<char, int> a, pair<char, int>b)
    {
        if(a.second <= b.second)
            return false;
        return true;
        
    }
public:
    

    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(int i =0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        string a = "";
        
        vector<pair<char, int>>v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), comp);
        
        for(auto i : v)
        {
           cout<<i.first<<" "<<i.second<<endl;
            for(int j = 0; j < i.second; j++)
            {
                a += i.first;    
            }
        }
        
        // string a ="";
        return a;
    }
};