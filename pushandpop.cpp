#include <iostream>
using namespace std;

#define n 5
int stack[5];
int top = -1;

int push(int x) {
    if (top == n - 1)
        cout << "Stack Overflow\n";
    else
        stack[++top] = x;
}

int pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        top--;
}
void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    display();

    pop();
    display();
}
