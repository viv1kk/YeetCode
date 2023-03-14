class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
        queue<int>q;
        int ind = 0;
        int count = 0;
        int x = 0;
        for(int i : st) q.push(i);
        
        while(ind < sd.size())
        {
            if(q.front() == sd[ind])
            {
                ind++;
                q.pop();
                x = 0;
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
            if(x >= sd.size())
                break;
            x++;
        }
        return sd.size()-ind;
    }
};