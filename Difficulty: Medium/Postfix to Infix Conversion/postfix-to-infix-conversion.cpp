// User function Template for C++

class Solution {
  public:
    string postToInfix(string s) {
        // Write your code here
        string ans = "";
stack<string> st;
for (int i = 0; i < s.size(); i++)
{
	if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '1' && s[i] <= '9'))
	{
		st.push(string(1, s[i]));
	}
	else
	{
		string op1 = st.top();
		st.pop();
		string op2 = st.top();
		st.pop();
		string temp = "(" + op2 + s[i] + op1 + ")";
		st.push(temp);
	}
}
ans += st.top();
return ans;
    }
};