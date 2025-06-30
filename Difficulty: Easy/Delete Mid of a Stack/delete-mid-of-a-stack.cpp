class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& st) {
         int n = st.size();
    stack<int> tempSt;
    int count = 0;

    while (count < n / 2) {
        int c = st.top();
        st.pop();
        tempSt.push(c);
        count++;
    }

    st.pop();

    while (!tempSt.empty()) {
        st.push(tempSt.top());
        tempSt.pop();
    }
    }
};