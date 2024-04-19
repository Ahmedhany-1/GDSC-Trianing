#include<iostream>
using namespace std;

struct Employee { // my own datatype
    string name;
    int age;
    double salary;

    Employee(){
        name = ' ';
        age = 0;
        salary = 0;
    }
   /* ~Employee(){ // you can use destructor when you need to free memory form pointers
        delete p;
        p = nullptr;
    }
    */
};
int add_employee = 0;
const int N = 100;
Employee arr[N];

void read_employee(){
    cout << "Enter the employee name ,age , salary";
    cin >> arr[add_employee].name >> arr[add_employee].age >> arr[add_employee].salary;
    add_employee++;
}
void print_employee(){
    for (int i = 0; i < add_employee; ++i) {
        cout << arr[i].name << " "<<arr[i].age <<" "<<arr[i].salary << endl;
    }
}
void read_employee_v1(Employee &e1){
    cout << "Enter the employee name ,age , salary\n";
    cin >> e1.name >> e1.age >> e1.salary;
}
void print_employeeV1(Employee e1){
    cout << e1.name << " " << e1.age << " " << e1.salary << endl;
}

int main() {
  /*  int x;
    Employee emp1;
    emp1.name = "ahmed";
    emp1.age = 10;
    emp1.salary = 100;

    cout << emp1.name << ' ' << emp1.salary << ' ' << emp1.age << endl;

    Employee emp2{"mohamed", 20, 1000};
    cout << emp2.name << ' ' << emp2.salary << ' ' << emp2.age << endl;

    Employee emp3;
    emp3 = emp1;
    emp3.salary = 2000;
    cout << emp3.name << ' ' << emp3.salary << ' ' << emp3.age << endl;
   cout << "----------------------------------------------------------------------------------------------------\n";
    arr[add_employee].name = "Yousef";
    arr[add_employee].age = 19;
    arr[add_employee].salary = 10000;
    add_employee++;
    arr[add_employee++] = emp1;

    cout << "The number employee is : " << add_employee << endl;
    for (int i = 0; i < add_employee; ++i) {
        cout << arr[i].name << " " << arr[i].age << ' ' << arr[i].salary << endl;
    }
   cout << "----------------------------------------------------------------------------------------------------\n";

    Employee e1;
   // read_employee_v1(e1);
    print_employeeV1(e1);
    cout << "----------------------------------------------------------------------------------------------------\n";
    // read_employee();
    print_employee();
    cout << "----------------------------------------------------------------------------------------------------\n";*/

    Employee *p = new Employee();
    p->name = "Ahmed";
    p->age = 20;
    p->salary = 1000;

    cout << p->name <<" "<<p->age <<" "<<p->salary;
    delete p;
    p = nullptr;
    cout << endl;
    Employee *pArray = new Employee[3];
    pArray[0].name = "Mohamed";
    pArray[0].age = 30;
    pArray[0].salary = 5000;
    cout << pArray[0].name <<" "<<pArray[0].age <<" "<<pArray[0].salary;

    delete []pArray;
    pArray = nullptr;
    return 0;
}
