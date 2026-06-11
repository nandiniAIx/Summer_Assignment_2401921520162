class Solution {
public:
    
    void fun(int open, int close, string s, vector<string>& ans) {
        
        if (open == 0 && close == 0) {
            ans.push_back(s);
            return;
        }
        
        if (open > 0) {
            fun(open - 1, close, s + "(", ans);
        }
        
        if (close > open) {
            fun(open, close - 1, s + ")", ans);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        fun(n, n, "", ans);
        return ans;
    }
};