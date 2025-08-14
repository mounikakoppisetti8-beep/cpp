#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Queue(int capacity);
    ~Queue();               
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    int dequeue();
    int peek();
    void display();
};

#endif
