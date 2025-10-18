#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Non-parameterised constructor
    Teacher() {
        cout << "Hi, I am a non-parameterised constructor." << endl;
    }

    // Parameterised constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
        cout << "Parameterised constructor invoked." << endl;
    }

    // Display function
    void display() {
        cout << "Name    : " << name << endl;
        cout << "Dept    : " << dept << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary  : " << salary << endl;
    }
};

int main() {
    // Using non-parameterised constructor
    Teacher t1;
    cout << endl;

    // Using parameterised constructor
    Teacher t2("John Doe", "CSE", "C++", 55000.50);
    t2.display();

    return 0;
}

