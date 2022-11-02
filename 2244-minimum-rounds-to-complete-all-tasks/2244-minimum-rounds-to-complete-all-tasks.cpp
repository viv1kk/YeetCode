class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        
        for(int i = 0; i < tasks.size(); ++i){
            mp[tasks[i]]++;
        }
        int r = 0;
        for(auto it = mp.begin(); it != mp.end(); ++it){
            int f = it->second;
            if(f == 1) return -1;
            // else if(f % 3 == 0){
            //     r += f/3;
            // }
            // else{
            //     r += (f/3)+1;
            // }
            else{
                r+=(f+2)/3;
            }
            
        }
        return r;
    }
};