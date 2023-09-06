#include <iostream>
#include <cstring>

#define MAX_SIZE 10

using namespace std;

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void MAKENULL(Stack& s) {
    s.top = -1;
}

void PUSH(char c, Stack& s) {
    if (s.top == MAX_SIZE - 1) {
        cout << "stack overflow" << endl;
        return;
    }
    s.data[++s.top] = c;
}

void POP(Stack& s) {
    if (s.top == -1) {
        cout << "stack underflow" << endl;
        return;
    }
    s.top--;
}

char TOP(Stack& s) {
    if (s.top == -1) {
        cout << "stack is empty" << endl;
        return '\0';
    }
    return s.data[s.top];
}

bool EMPTY(Stack& s) {
    return s.top == -1;
}

void PRINT(Stack& s) {
    cout << "stack: ";
    for (int i = 0; i <= s.top; i++) {
        cout << s.data[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack S;
    char c;
    MAKENULL(S);
    c = getchar();
    while (c != '=') {
        switch (c) {
            case '#': POP(S); break;
            case '@': MAKENULL(S); break;
            case '^': PUSH(TOP(S), S); break;
            default: PUSH(c, S);
        }
        c = getchar();
    }
    PRINT(S);
    return 0;
}
