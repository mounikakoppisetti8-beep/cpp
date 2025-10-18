#include<bits/stdc++.h>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hi, I am " << name << ", Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
public:
    int rollNumber;

    void study() {
        cout << name << " is studying. Roll No: " << rollNumber << endl;
    }
};

// Derived class 2
class Teacher : public Person {
public:
    string subject;

    void teach() {
        cout << name << " is teaching " << subject << endl;
    }
};

int main() {
    Student s;
    s.name = "Alice";
    s.age = 20;
    s.rollNumber = 101;
    s.introduce();
    s.study();

    Teacher t;
    t.name = "Dr. Bob";
    t.age = 40;
    t.subject = "Mathematics";
    t.introduce();
    t.teach();

    return 0;
}

