/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
void QueueStack ::push(int x) {
    // code here
    q1.push(x);
    for(int i = 0 ;i<q1.size()-1;i++){
        q1.push(q1.front());
        q1.pop();
    }
}

int QueueStack ::pop() {
    if(q1.empty()) return -1;
    else {
        int ele = q1.front();
        q1.pop();
        return ele;
    }
}