#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id = -1;
    string name;

    Employee() {
    }

    Employee(int id_, string name_) {
        id = id_;
        name = name_;
    }

    void print() {
        cout << id << " " << name << "\n";
    }
};

int main() {
    Employee e1(10, "Ahmed");
    e1.print();		// 10 mostafa

    // int *x { new int(50) };
    Employee* e2 { new Employee(20, "Hany") };
    e2->print();	// 20 belal

    Employee* e3 = new Employee();
    (*e3).print();	// -1

    Employee* e4 = e2;
    Employee* e5 { &e1 };

    Employee& e6 = *e2;
    e2->id = 111;
    e6.print();		// 111 belal

   Employee*arr[2] ;
    arr[0] = e2;
    arr[1] = &e6;

    // delete ONLY the "new" created
    delete e2;
    delete e3;
    e2 = e3 = nullptr;

    int *x = new int;
    *x = 10;

    cout<<*x<<" "<<x<<" "<<&x<<"\n";

    return 0;
}
