class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        int (*f)(int)= [](int a)-> int{
            int c = 0;
            while(a){
                c += (a&1);
                a = (a>>1);
            }
            return c;
        }; 
        sort(arr.begin(), arr.end(), [&](int a, int b){
            int x = f(a);
            int y = f(b);
            if(x == y){
                return a < b;
            }
            return (x < y);
        });
        return arr;
    }
};