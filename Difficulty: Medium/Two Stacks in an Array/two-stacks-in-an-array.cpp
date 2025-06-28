class twoStacks {
  public:

    static const int MAX = 100;
    int arr[100];
    int top1, top2;
    
    twoStacks() {
        top1 = -1;
        top2 = MAX;
    }

    void push1(int x) {
        if(top1 < top2 -1) {
            arr[++top1] = x;
        }
        
    }

    void push2(int x) {
        if(top1 < top2-1)
            arr[--top2] = x;
    }

    int pop1() {
        if(top1 == -1)
            return -1;
        int x = arr[top1--];
        return x;
    }

    int pop2() {
        if(top2 == MAX)
            return -1;
        int x = arr[top2++];
        return x;
    }
};

