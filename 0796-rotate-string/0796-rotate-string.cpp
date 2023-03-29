class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        goal = goal+goal;
        int x = goal.find(s);
        return (x != -1);
    }
};