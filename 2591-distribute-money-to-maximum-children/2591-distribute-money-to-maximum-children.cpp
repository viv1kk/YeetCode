class Solution {
public:
    int distMoney(int money, int children) {
        if(money < children) return -1;
        money -= children;
        
        int num =  min(money/7, children);
        // cout<<num<<" "<<money;
        children -= num;
        money -= (num*7);
        
        if(money > 0)
        {
            if(children == 0) num--;
            else if(money == 3 && children == 1)num--;
        }
        
        if(num < 0)
            return -1;
        return num;
    }
};