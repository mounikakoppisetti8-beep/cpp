#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int* arr;
    int top;
    int capacity;
public:
    Stack(int size);       
    ~Stack();               

    void push(int value);   
    int pop();              
    int peek();             
    bool isEmpty() const;   
    bool isFull() const;    
    void display() const;   
};
#endif
