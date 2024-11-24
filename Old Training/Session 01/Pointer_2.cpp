#include <iostream>
using namespace std;

int main()
{
    /* pointer to array
    int arr[]{1,2,3,4};
    cout << &arr[0] << " " << arr  << endl; // 0xc31e9ff7d0 0xc31e9ff7d0
    cout << arr[0] << " " << *arr  << endl; // 1 1
    cout << arr[1] << " " << *arr + 1 << endl;  // 2 2

    int *ptr = arr;
    cout << *ptr << endl; // 1
    cout << ptr  << " " << arr << endl; //0x274cdff830 0x274cdff830
    cout << ptr + 1  << " " << *(ptr + 1) << endl; // 0xaa8bdffdd4 2
    cout << ptr[2] << endl; // 3

    ptr[3] = 5;
    cout << ptr[3]; // 5
    */
    
    /* Pointer Arithmetic
    int arr[]{2 , 5, 7, 10};
    int *ptr = arr;
    ++ptr; // ptr = ptr + 1
    cout<< *ptr << endl; // 5
    cout << *ptr++ << " " << *ptr << endl; // 5 7 
    // cout << *ptr ; then ptr++
    cout << *++ptr << " " << *ptr << endl; // 10 10
    // ptr++ then cout << *ptr ; 
    ptr -= 2;
    cout << *ptr << endl; // 5

    cout << ++*ptr << endl; // 6
    */

    return 0;
}
// arr - &arr[0] - ptr