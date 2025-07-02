class Solution {
  stack<pair<int, int>> st;
  public:
  
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
       if(st.empty()){
           //x, minimumm value
           st.push(make_pair(x, x));
       }
       else{
           //value, minimmu value
           st.push(make_pair(x, min(st.top().second, x)));
       }
    }

    // Remove the top element from the Stack
    void pop() {
       if(st.empty()){
           return;
       }
       else{
           st.pop();
       }
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(st.empty()){
            return -1;
        }
        else{
        pair<int, int> topEle= st.top();
        return topEle.first;
        }
        
    }

    // Finds minimum element of Stack
    int getMin() {
        if(st.empty()){
            return -1;
        }
        else{
            pair<int, int> getMinEle= st.top();
            return getMinEle.second;
            
        }
    }
};

 

 

