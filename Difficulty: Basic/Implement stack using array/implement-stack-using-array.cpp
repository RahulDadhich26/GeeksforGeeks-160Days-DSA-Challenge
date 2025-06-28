// Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    if(top == 999){
        return;
    }
    arr[++top] = x;
    
}

int MyStack ::pop() {
    if(top == -1)
        return -1;
    int x = arr[top--];
    return x;
}