class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;
        
        for (int i = 0; i < tokens.size(); i++) {
            
            string t = tokens[i];
            
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                
                int num2 = st.top();
                st.pop();
                
                int num1 = st.top();
                st.pop();
                
                int result = 0;
                
                if (t == "+") result = num1 + num2;
                else if (t == "-") result = num1 - num2;
                else if (t == "*") result = num1 * num2;
                else result = num1 / num2;
                
                st.push(result);
            }
            else {  
                int num = stoi(t);
                st.push(num);
            }
        }
        
        return st.top();
    }
};