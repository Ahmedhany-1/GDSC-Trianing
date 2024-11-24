#include "04 Employee.h"

// Default Constructor
Employee::Employee() : Name("Unknown"), age(0), address("Unknown"), salary(0.0) {}

// Constructor with name, age, and salary
Employee::Employee(string _name, int _age, double _salary)
        : Name(_name), age(_age), address("Unknown"), salary(_salary) {}

// Constructor with name and age
Employee::Employee(string _name, int _age)
        : Name(_name), age(_age), address("Unknown"), salary(0.0) {}

// Setter for Name
void Employee::SetName(string _Name) {
    Name = _Name;
}

// Getter for Name
string Employee::GetName() {
    return Name;
}

// Setter for Age
void Employee::SetAge(int _age) {
    age = _age;
}

// Getter for Age
int Employee::GetAge() {
    return age;
}

// Setter for Salary
void Employee::SetSalary(double _salary) {
    salary = _salary;
}

// Getter for Salary
double Employee::GetSalary() {
    return salary;
}

// Print function to display employee details
void Employee::Print() {
    cout << "Name: " << Name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Salary: $" << salary << endl;
}

// Destructor
Employee::~Employee() {
    // No dynamic allocation; nothing specific to clean up
    cout << "Employee object destroyed: " << Name << endl;
}
