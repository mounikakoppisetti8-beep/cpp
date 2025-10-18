#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size);        
    Queue();                  

    bool isFull() const;
    bool isEmpty() const;
    void enqueue(int value);
    int dequeue();
    int peek() const;
    void display() const;
};
Queue::Queue(int size) {
    capacity = size;
    arr = new int[capacity];
    front = 0;
    rear = -1;
}

Queue::~Queue() {
    delete[] arr;
}

bool Queue::isFull() const {
    return rear == capacity - 1;
}

bool Queue::isEmpty() const {
    return front > rear;
}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full.\n";
        return;
    }
    arr[++rear] = value;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[front++];
}

int Queue::peek() const {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[front];
}

void Queue::display() const {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    for (int i = front; i <= rear; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


#endif

