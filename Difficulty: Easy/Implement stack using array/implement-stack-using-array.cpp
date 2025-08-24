class MyStack {
    int *arr;
    int top;
    int size;
     
  public:
    MyStack(){
        size = 100;
        arr= new int[size];
        top = -1;
    }
    void push(int x) {
        // code here
        if(size - top > 1) {
        top++;
        arr[top] = x;
        }
    }

    int pop() {
       if(top >= 0){
           int a = top;
           top--;
           return arr[a];
       }
       else{
           return -1;
       }
    }
};