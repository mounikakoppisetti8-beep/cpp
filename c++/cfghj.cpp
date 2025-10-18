#include <iostream>
int main() {
    Stack myStack(5);  // Create a stack of size 5

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.display();

    std::cout << "Top element: " << myStack.peek() << "\n";

    std::cout << "Popped: " << myStack.pop() << "\n";
    myStack.display();

    return 0;
}


