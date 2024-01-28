class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<int, int>mp;
        for(int i : nums) mp[i]++;
        
        int ans = 1;
        for(auto[i, j] : mp){
            if(j == 1 || i == 1) continue;
            int x = 0;
            unsigned long long f = i;
            while(mp.find((long long)f*f) != mp.end()){
                if(mp[f*f] == 1){
                    x += 3;
                    ans = max(ans, x);
                    break;
                }
                else{
                    x += 2;
                    ans = max(ans, x+1);
                }
                f *=f;
            }   
        }
        if(mp.find(1) != mp.end() && mp[1] > 1) ans = max(ans, (mp[1]%2)?mp[1]:mp[1]-1);
        return ans;
    }
};