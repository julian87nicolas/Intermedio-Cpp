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
    Stack littleStack, anotherStack, funnyStack;

    littleStack.push(1);
    anotherStack.push(littleStack.pop() + 1);
    funnyStack.push(anotherStack.pop()+2);
    cout << funnyStack.pop() << endl;
}
```