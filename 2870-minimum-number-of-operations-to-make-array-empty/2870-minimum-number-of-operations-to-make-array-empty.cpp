class Solution {
public:
    int minOperations(vector<int>& a) {
        unordered_map<int, int>mp;
        for(int i : a){
            mp[i]++;
        }
        
        int opr = 0;
        for(auto[i, j] : mp){
            if(j == 1){
                opr = -1;
                break;
            }
            else{
                if(j < 4) opr++;
                else{
                    if(j%3) opr += (j/3)+1;
                    else opr += j/3;
                }
            }
        }
        return opr;
    }
};