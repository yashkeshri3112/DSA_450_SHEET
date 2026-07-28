/* QUestions-: Implement stack from a scratch.*/

class myStack {
    int *arr;
    int size;
    int top;
  public:
    myStack(int n) {
        top=-1;
        size=n;
        arr=new int[size];
        
    }

    bool isEmpty() {
    
        return top==-1;
    }

    bool isFull() {
     return top==size-1;
    }

    void push(int x) {
        //check if stack is empty or not
        if(isFull())
            return ;
            top++;
            arr[top]=x;
            
        
    }

    void pop() {
        if(isEmpty())
            return;
            top--;
        
            
    }

    int peek() {
        if(isEmpty())
            return -1;
            return arr[top];
        }
    
};