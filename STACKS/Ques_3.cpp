/* Questions Implement 2 stack in an array.*/
class twoStacks {
private:
    int* arr;
    int size;
    int top1, top2;

public:
    // Default constructor
    twoStacks() {
        size =100;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    
    void push1(int x) {
        if (top2-top1 > 1) {
            top1++;
            arr[top1] = x;
        }
    }

    void push2(int x) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = x;
        }
    }

    int pop1() {
        if (top1>=0) {
            int val = arr[top1];
            top1--;
            return val;
        }
        return -1;
    }

    int pop2() {
        if (top2<size) {
            int val = arr[top2];
            top2++;
            return val;
        }
        return -1;
    }
};
