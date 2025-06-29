// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
         stack<char> st;
        string res;

        for(int i=0;i<pre_exp.size();i++){
            char c=pre_exp[i];
            
            if((c<='Z' && c>='A') || (c<='z' && c>='a') || (c<='9' && c>='0')){
                res+=c;
                while(!st.empty() && st.top()==')'){
                    res+=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    res+=st.top();//to add operator
                    st.pop();
                }
            }
            
            else{
                res+='(';
                st.push(')');
                st.push(c);
            }
        }
        
        return res;


    }
};