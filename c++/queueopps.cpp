#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    int front, rear, arr[100];

public:
    Queue() : front(0), rear(-1) {}

    bool isEmpty() {
        return front > rear;
    }

    bool isFull() {
        return rear == 99;
    }

    void enqueue(int x) {
        if (!isFull()) arr[++rear] = x;
    }

    int dequeue() {
        if (!isEmpty()) return arr[front++];
        return -1;
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[front];
    }
};

// Corrected main function
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.peek() << endl;

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    cout << q.peek() << endl;

    q.dequeue(); 
    q.dequeue(); 

    return 0;
}

