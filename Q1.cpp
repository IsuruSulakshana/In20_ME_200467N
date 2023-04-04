//implementation of a Stack using an array
#include <iostream>
using namespace std;

const int arraySize = 20;
int top = -1;
int arr[arraySize];

bool isFull() {
    return top == arraySize - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int x) {
    if (isFull()) {
        cout << "Stack Overflow\n";
        return;
    }
    top = top + 1;
    arr[top] = x;
}

int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return -1;
    }
    int x = arr[top];
    top = top - 1;
    return x;
}



int main() {
    push(10);
    push(20);
    cout << pop() << " popped from stack\n";
    push(30);
    cout << pop() << " popped from stack\n";
    return 0;
}
