#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rollno;

    Student(string n, int r) {
        name = n;
        rollno = r;
    }

    void showStudent() {
        cout << "Student Name: " << name << ", Roll no: " << rollno << endl;
    }
};

class Teacher {
public:
    string subject;

    Teacher(string sub) {
        subject = sub;
    }

    void showTeacher() {
        cout << "Teaches subject: " << subject << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    string researcharea;

    TeachingAssistant(string n, int r, string sub, string res) 
        : Student(n, r), Teacher(sub) {
        researcharea = res;
    }

    void showTA() {
        cout << "Teaching Assistant (PhD Student)" << endl;
        showStudent();
        showTeacher();
        cout << "Research Area: " << researcharea << endl;
    }
};

int main() {
    TeachingAssistant ta("Rahul", 101, "Data Structures", "Machine Learning");
    ta.showTA();
    return 0;
}

