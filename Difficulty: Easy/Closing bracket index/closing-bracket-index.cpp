class Solution {
  public:
    int closing(string expr, int openingIndex) {
        // code here.
         stack<int> s;
    for (int i = 0; i < expr.size(); ++i) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            s.push(i);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (s.empty()) {
                return -1; // Unbalanced expression
            }
            int top = s.top();
            s.pop();
            if (top == openingIndex) {
                return i; // Found the closing bracket
            }
        }
    }
    return -1; // No closing bracket fo
    }
};