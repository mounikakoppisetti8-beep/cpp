#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box(int l) {
        length = l;
    }

    // Friend function declaration
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    // Can access private member 'length' because it's a friend
    cout << "Length is: " << b.length << endl;
}

int main() {
    Box b1(10);           // Create object with length = 10
    printLength(b1);      // Call friend function
    return 0;
}

