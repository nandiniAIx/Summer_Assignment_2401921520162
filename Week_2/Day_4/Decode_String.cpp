class Solution {
public:
    string decodeString(string s) {
        
        stack<int> numStack;
        stack<string> strStack;
        
        string curr = "";
        int num = 0;
        
        for (int i = 0; i < s.length(); i++) {
            
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0'); 
            }
            
            else if (s[i] == '[') {
                numStack.push(num);
                strStack.push(curr);
                
                num = 0;
                curr = "";
            }
            
            else if (s[i] == ']') {
                
                int repeat = numStack.top();
                numStack.pop();
                
                string prev = strStack.top();
                strStack.pop();
                
                for (int j = 0; j < repeat; j++) {
                    prev += curr;
                }
                
                curr = prev;
            }
            
            else {
                curr += s[i]; 
            }
        }
        
        return curr;
    }
};