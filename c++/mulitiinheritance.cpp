#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string name, int age) {
        cout << "Parent called \n";
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
public:
    int rollnum;

    // Constructor
    Student(string name, int age, int roll) : Person(name, age) {
        cout << "Child is called \n";
        this->rollnum = roll;
    }
};

class GradStudent : public Student {
public:
    string researcharea;

    // Constructor calls Student's constructor
    GradStudent(string n, int a, int r, string ra) 
        : Student(n, a, r), researcharea(ra) {
        cout << "Gradstudent constructor called \n";
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << rollnum << endl;
        cout << "Research Area: " << researcharea << endl;
    }
};

int main() {
    GradStudent gs("Alice", 25, 101, "Artificial Intelligence");
    gs.display();
    return 0;
}

