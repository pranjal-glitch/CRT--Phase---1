class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s) {
            // opening brackets
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                // if stack empty → invalid
                if(st.empty()) return false;

                char top = st.top();

                // check matching
                if((ch == ')' && top == '(') ||
                   (ch == '}' && top == '{') ||
                   (ch == ']' && top == '[')) {
                    st.pop();
                } 
                else {
                    return false;
                }
            }
        }

        // stack should be empty
        return st.empty();
    }
};
