#include <iostream>
#include <string>
using namespace std;

// Class definition
class Teacher {
private:
    double salary;  // private variable

public:
    string name;
    string dept;

    // Setter method to set the salary
    void SetSalary(double amount) {
        if (amount > 0) {
            salary = amount;
        } else {
            cout << "Invalid salary! Salary must be positive." << endl;
            salary = 0;  // setting default value
        }
    }

    // Getter method to access the salary
    double GetSalary() {
        return salary;
    }
};

// Main function
int main() {
    Teacher T1;

    T1.name = "Ashok";
    T1.dept = "CSE";

    // Setting salary using setter
    T1.SetSalary(25000);  // valid salary

    // Printing the salary using getter
    cout << "Name: " << T1.name << endl;
    cout << "Department: " << T1.dept << endl;
    cout << "Salary: " << T1.GetSalary() << endl;

    // Trying to set an invalid salary
    T1.SetSalary(-5000);  // invalid salary

    // Printing the salary again
    cout << "Updated Salary: " << T1.GetSalary() << endl;

    return 0;
}

