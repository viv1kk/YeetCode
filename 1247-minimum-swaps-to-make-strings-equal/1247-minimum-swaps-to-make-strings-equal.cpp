
class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int count = 0;
        int n = s1.length();
        
        int x = 0, y = 0;
        for(int  i = 0; i < n; i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i] == 'x')x++;
                else y++;
            }
        }
        
        if((x+y)%2 == 1) return -1;
        int ans = (x+y)/2;
        if (x%2 == 1)
        {
            ans+=1;
        }
        return ans;

//      // int n=s1.length();
//      //    if(n!=s2.length())return -1;
//      //    int hash[26]={0};
//      //    for(auto i:s1){
//      //        hash[i-'0']++;
//      //    }
//      //    for(auto i:s2){
//      //        hash[i-'0']++;
//      //    }
//      //    for(auto i:hash){
//      //        if(i&1)return -1;
//      //    }
//      //    int cnt=0;
//      //    for(int i=0;i<n;i++){
//      //        if(s1[i]!=s2[i]){
//      //            int j=i+1;
//      //            while(j<n && s1[i]!=s2[j])j++;
//      //            if(j==n)return -1;
//      //            swap(s[i],s[j]);
//      //            cnt++;
//      //        }
//      //    }
//      //    return cnt;
    }
};