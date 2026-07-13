class myStack {
  public:
        int top;
        int size;
        int *arr;
    myStack(int size) {
        // Define Data Structures
        this->size = size;
        arr = new int[size];
        top  = -1;
        
        
    }

    bool isEmpty() {
        // check if the stack is empty
        return (top == -1);
    }

    bool isFull() {
        
        // check if the stack is full
        return (top == size - 1);
        
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull()){
            cout<<"stack overflow\n";
            return;
        }
        
        arr[++top] = x;
    }

    void pop() {
        // removes an element from the top of the stack
        if(isEmpty()){
            cout<<"stack underflow\n";
            return;
        }
        
        top--;
        
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()){
            cout<<"stack is Empty\n";
            return -1;
        }
        
        return arr[top];
        
    }
};