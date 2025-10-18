#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    front = 0;
    rear = -1;
    size = 0;
}

Queue::~Queue() {
    delete[] arr;
}

bool Queue::isEmpty() {
    return size == 0;
}

bool Queue::isFull() {
    return size == capacity;
}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue.\n";
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = value;
    size++;
    cout << value << " enqueued.\n";
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue.\n";
        return -1;
    }
    int val = arr[front];
    front = (front + 1) % capacity;
    size--;
    cout << val << " dequeued.\n";
    return val;
}

int Queue::peek() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[front];
}

void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue contents: ";
    for (int i = 0; i < size; i++) {
        cout << arr[(front + i) % capacity] << " ";
    }
    cout << endl;
}

int main() {
    Queue q(5);  // create queue with size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  // should say queue is full

    q.display();

    return 0;
}

