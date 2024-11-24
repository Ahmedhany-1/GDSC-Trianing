#ifndef CODING_AREA_EMPLOYEE_H
#define CODING_AREA_EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    int age;
    string address;
    double salary;

public:
    // Constructors
    Employee();
    Employee(string _name, int _age, double _salary);
    Employee(string _name, int _age);

    // Getter and Setter Methods
    void SetName(string _Name);
    string GetName();
    void SetAge(int _age);
    int GetAge();
    void SetSalary(double _salary);
    double GetSalary();

    // Print function to display employee details
    void Print();

    // Destructor
    ~Employee();
};

#endif //CODING_AREA_EMPLOYEE_H
