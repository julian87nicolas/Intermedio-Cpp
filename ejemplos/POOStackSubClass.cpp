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
        void push(int value){
            stackStore[sp++] = value;
        }
        int pop() {
            return stackStore[--sp];
        }
};

class AddingStack : Stack {
    private:
        int sum;
    public:
        AddingStack();
        void push(int value);
        int pop();
        int get_sum();
};

AddingStack::AddingStack() : Stack () {
    sum = 0;
}

void AddingStack::push(int value) {
    sum += value;
    Stack::push(value);
}

int AddingStack::pop() {
    int val = Stack::pop();
    sum -= val;
    return val;
}

int AddingStack::get_sum(){
    return sum;
}

int main() {
    AddingStack superStack;

    for (size_t i = 1; i < 10; i++) {
        superStack.push(i);
    }
    cout << superStack.get_sum() << endl;
    
    for (size_t i = 0; i < 10; i++) {
        superStack.pop();
    }
    cout << superStack.get_sum() << endl;
}