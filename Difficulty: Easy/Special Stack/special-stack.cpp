void push(stack<int>& s, int a){
    s.push(a);
}
bool isFull(stack<int>& s,int n){
    return s.size() == n;
}
bool isEmpty(stack<int>& s){
    return s.size() == 0;
}
int pop(stack<int>& s){ 
    s.pop(); // since stack size atleast 1
}
int getMin(stack<int>& s){
    int mini = 100001; 
    while(!isEmpty(s)) {
        if(s.top() < mini)
            mini = s.top();
       s.pop();
    }
    return mini;
}