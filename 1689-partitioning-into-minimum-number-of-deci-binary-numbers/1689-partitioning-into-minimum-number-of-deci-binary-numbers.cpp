class Solution {
public:
    int minPartitions(string n) {
        for(int i = 9; i > 0 ; i--)
        {
            if(count(n.begin(), n.end(), ('0'+i))!= 0)return i;
        }
        return 0;
    }
};