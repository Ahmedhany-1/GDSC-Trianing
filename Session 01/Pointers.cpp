#include <iostream>
using namespace std;

int main()
{
    /* Reference
    int age = 50;
    int &ref = age;
    cout << age << " " << &age << endl;
    cout << ref << " " << &ref << endl;

    ref = 60;
    cout << ref << " " << age << endl;

    int &ref2 = ref;
    cout << ref2 << endl;

    cout << &ref << " " << &ref2 << " " << &age << endl;

    int x = 70;
   // ref = &x; // wrong we can't re-assign it to new address
   // int &ref3 = 3; // must be initialized and declared variable

   double y = 2.5;
   //int &ref4 = y; // must be point to same type
   */

    /* Pointer 1
    int age = 50;
    int *ptr = &age;

    cout << ptr << " " << *ptr << " " << &ptr << endl;
    cout << &age << " " << age << endl;

    *ptr = 60;
    cout << *ptr << " " << age << endl;

    int another = 70;
    ptr = &another; //re - assign to another
    cout << *ptr << " " << age << " " << another << " " << endl;

    cout << *ptr << " " << ptr << " " << &ptr << endl;
    cout << another << " " << &another << endl;

   // int *ptr; // whenever a pointer is not use assign nullptr
   // int *ptr = nullptr; //point to nothing

    double x = 50.5; // must be point to same type
    double *ptr = &x;
    cout << *ptr << " " << ptr << endl;
    cout << x << " " << &x << endl;

    */

    //example : try to trace it !!
    int val1 = 5, val2 = 15;
    cout << &val1 << " " << &val2 << endl; // 0x23bdffdbc 0x23bdffdb8
    int *p1 = &val1, *p2 = nullptr;
    p2 = &val2;

    *p1 = 10;
    *p2 = *p1 + 6;
    cout << val1 << " " << val2 << endl; // 10 16

    p1 = p2;
    cout << p1 << " " << p2 << endl; // 0x9b29ffa78 0x9b29ffa78

    *p1 = 20;
    cout << val1 << " " << val2 << endl; //10 20
    cout << *p1 << " " << *p2 << endl; //20 20

    p1 = &val1;
    cout << *p1 << " " << *p2 << endl; //10 20

    cout << &p1 << " " << &p2 << endl; // 0x2389bffbd0 0x2389bffbc8
    swap(p1, p2);
    cout << *p1 << " " << *p2 << endl; //20 10
    cout << &p1 << " " << &p2 << endl; //0x2389bffbd0 0x2389bffbc8
}
