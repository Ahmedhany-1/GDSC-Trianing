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
    Employee() : age(0) , salary(0) {}

    Employee(string _name, int _age, double _salary)
            : Name(_name), age(_age), salary(_salary) {}
    Employee(string _name, int _age)
    : Name(_name), age(_age), salary(0.0) {}

    // Getter and Setter Methods
    void SetName(string _Name) { Name = _Name; }
    string GetName() { return Name; }
    void SetAge(int _age) { age = _age; }
    int GetAge() { return age; }
    void SetSalary(double _salary) { salary = _salary; }
    double GetSalary() { return salary; }

    // Print function to display employee details
    void Print() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: $" << salary << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Employee object destroyed: " << Name << endl;
    }
};


int main(){
   freopen("out.txt", "w", stdout);

   Employee emp1("Ahmed" , 20 , 40000);
   Employee emp2("Ahmed" , 20 , 40000);
   Employee emp3("Ahmed" , 20 , 40000);

    return 0;
}