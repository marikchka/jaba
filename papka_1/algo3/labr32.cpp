#include <iostream>
#include <cstring>
#define MAX_SIZE 10

using namespace std;

struct Queue {
    char data[MAX_SIZE];
    int head;
    int tail;
};

void MAKENULL(Queue& q) {
    q.head = -1;
    q.tail = -1;
}

bool EMPTY(Queue& q) {
    return q.head == -1 && q.tail == -1;
}

bool FULL(Queue& q) {
    return (q.tail + 1) % MAX_SIZE == q.head;
}

void ENQUEUE(char c, Queue& q) {
    if (FULL(q)) {
        cout << "queue overflow" << endl;
        return;
    }
    if (EMPTY(q)) {
        q.head = 0;
        q.tail = 0;
    } else {
        q.tail = (q.tail + 1) % MAX_SIZE;
    }
    q.data[q.tail] = c;
}

void DEQUEUE(Queue& q) {
    if (EMPTY(q)) {
        cout << "queue uderflow" << endl;
        return;
    }
    if (q.head == q.tail) {
        q.head = -1;
        q.tail = -1;
    } else {
        q.head = (q.head + 1) % MAX_SIZE;
    }
}

char FRONT(Queue& q) {
    if (EMPTY(q)) {
        cout << "queue is empty" << endl;
        return '\0';
    }
    return q.data[q.head];
}

int main() {
    Queue Q;
    char c;
    MAKENULL(Q);
    c = getchar();
    while (c != '=') {
        ENQUEUE(c, Q);
        c = getchar();
    }
    DEQUEUE(Q);
    DEQUEUE(Q);
    ENQUEUE('<', Q);
    while (!EMPTY(Q)) {
        printf("%c, ", FRONT(Q));
        DEQUEUE(Q);
    }
    printf("\n");
    return 0;
}
