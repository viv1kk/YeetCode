class Solution {
public:
    string strWithout3a3b(int a, int b) {
        priority_queue<pair<int, char>>pq;
        if(a) pq.push({a, 'a'});
        if(b) pq.push({b, 'b'});
        
        pair<int, char>prev, curr;
        string s = "";
        
        while(!pq.empty())
        {
            pair<int, char>temp;
            temp = {0, 'd'};
            
            curr = pq.top();
            if(curr == prev)
            {
                temp = curr;
                pq.pop();
                if(!pq.empty()){
                    curr = pq.top();
                }
            }
            pq.pop();
            
            int r = 0;
            if(temp.second == 'd') r = min(2, curr.first);
            else
            {
                int x = curr.first;
                int y = (temp.first/x)+(temp.first%x)?1:0;
                if(y >= 2) r = 1;
                else r = min(2, min(y, curr.first));
                pq.push(temp);
            }
            s += curr.second;
            if(r > 1) s += curr.second;
            curr.first = curr.first- r;
            if(curr.first > 0)
                pq.push(curr);
            prev = curr;
        }
        return s;
    }
};