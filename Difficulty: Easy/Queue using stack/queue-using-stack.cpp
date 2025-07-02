// User function Template for C++

class Queue {
    stack<int> input, output;

  public:
      void enqueue(int x) {
        while(!input.empty()){
            int top= input.top();
            output.push(top);
            input.pop();
        }
        input.push(x);
        while(!output.empty()){
            int top= output.top();
            output.pop();
            input.push(top);
        }
    }
    int dequeue() {
         if(input.empty()){
            return -1;
        }
        else{
            int data= input.top();
            input.pop();
            return data;
        }
    }
};