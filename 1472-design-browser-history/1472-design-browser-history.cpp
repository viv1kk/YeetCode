class BrowserHistory {
public:
    stack<string>hist, forw;
    string curr; 
    
    BrowserHistory(string homepage) {
       curr = homepage;
    }
    
    void visit(string url) {
        hist.push(curr);
        curr = url;
        forw = stack<string>();
    }
    
    string back(int steps) {
        int i = 0;
        while(!hist.empty() && i < steps)
        {
            forw.push(curr);
            curr = hist.top();
            hist.pop();
            i++;
        }
        return curr;
    }
    
    string forward(int steps) {
        int i = 0;
        while(!forw.empty() && i < steps)
        {
            hist.push(curr);
            curr = forw.top();
            forw.pop();
            i++;
        }
        // forw.push(t);
        return curr;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */