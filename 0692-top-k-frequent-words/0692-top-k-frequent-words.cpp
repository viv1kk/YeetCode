// class comp{
//   public:
//     bool operator()(pair<int, string> a, pair<int, string> b)const{
//             if(a.first < b.first || (a.first == b.first && a.second>b.second) ) return true;
//             return false;
//         }
// };

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>mp;
        for(auto i : words)
            mp[i]++;
        
        auto comp = [](pair<int, string> &a, pair<int, string> &b){
            if(a.first < b.first || (a.first == b.first && a.second>b.second) ) return true;
            return false;
        };
        priority_queue<pair<int, string>,vector<pair<int, string>>,decltype(comp)>pq(comp);
        for(auto[a, b] : mp)
            pq.push({b, a});

        vector<string>ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;   
    }
};