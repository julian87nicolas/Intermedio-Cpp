#include <iostream>

using namespace std;

class Stack {
    private:
        int stackStore[100];
        int sp;
    public:
        Stack() {
            sp = 0;
        }
        
        void push(int value);

        int pop() {
            return stackStore[--sp];
        }
};

void Stack::push(int value) {
    stackStore[sp++] = value;
}

int main () {
    Stack myStack = Stack();
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.push(123);
}