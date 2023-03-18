class Solution {
public:
    
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>>pq;
        if(a) pq.push({a, 'a'});
        if(b) pq.push({b, 'b'});
        if(c) pq.push({c, 'c'});
        
        pair<int, char>prev, curr;
        string s = "";
        
        while(pq.size() > 1)
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
                if(x > 1) x += pq.top().first;
                int y = (int)ceil((double)temp.first/(double)x);
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
        
        if(s == ""){
            if(a) s.insert(0, min(a, 2), 'a');
            if(b) s.insert(0, min(b, 2), 'b');
            if(c) s.insert(0, min(c, 2), 'c');
        }
        else if(!pq.empty() && s.back() != pq.top().second)
        {
            int x = min(2, pq.top().first);
            s += pq.top().second;
            if(x > 1) s+=pq.top().second;
        }
    
        return s;
    }
};