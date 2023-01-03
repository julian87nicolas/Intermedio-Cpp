#include <iostream>

using namespace std;

int stack[100];
int SP = 0;

void push(int value) {
    stack[SP++] = value;
}

int pop() {
    return stack[--SP];
}

int main(){
    push(3);
    push(2);
    push(1);
    cout << pop() << endl;
    cout << pop() << endl;
    push(123);
    cout << pop() << endl;
    cout << pop() << endl;
    push(321);
}