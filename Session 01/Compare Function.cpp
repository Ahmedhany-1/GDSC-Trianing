#include <iostream>
#include <algorithm>
using namespace std;

struct employee{
    string name;
    int age;
    double salary;

};

bool compare_name(employee &a, employee &b) {
    return a.name < b.name;	// smaller name first
}

bool compare_salary(employee &a, employee &b) {
    return a.salary > b.salary;	// bigger salary salary
}

bool compare_name_salary(employee &a, employee &b) {
    // smaller name first, if tie smaller salary
    if (a.name != b.name)
        return a.name < b.name;
    return a.salary < b.salary;
}

void print_employee(employee *arr , int sz) {
    for (int i = 0; i < sz; ++i) {
        cout << arr[i].name << " his age is (" << arr[i].age  << ") has salary (" << arr[i].salary << ")\n";
    }
}
int main(){
    freopen("out.txt", "w", stdout);

    employee arr[4]{
            {"Ali", 25 , 1000},
            {"Zara", 30 , 2000},
            {"Ali", 20,3000},
            {"John", 35,5000}
    };

    sort(arr , arr+4 , compare_name_salary);
    print_employee(arr , 4);

    return 0;
}