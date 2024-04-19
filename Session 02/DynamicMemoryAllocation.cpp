#include<iostream>
using namespace std;
const int N = 1e5;
int main() {
    /*//Dynamic Memory Allocation
    // stack vs heap --> key word (New , delete , pointers)
    // Allocate - deallocate
    int x = 10;
    int arr[] = {1,2,3};
    arr[0] = 10;

    int *p = new int; // (new) allocate in heap and return address
    *p = 10;

    cout << *p << endl;
    delete p; // after this line p refer to garbage so we need to assign it to NULL
    p = nullptr;

    int *p2 = new int[4];
    //p2[0] = 10;
    //p2[1] = 20;

    for (int i = 0; i < 4; ++i) {
        cin >> p2[i];
    }
    for (int i = 0; i < 4; ++i) {
        cout << p2[i] << ' ';
    }
    delete []p2; //p2 refer to ?

    p1 = p2 = nullptr;
*/
   /* int *q;
    if(//)
    {
        int *p;
        p = new int ;
        *p = 10;
        p = q;
    } // deallocate of p
    // *p = 5;
    // delete p ;
    delete q;
    // deallocate of q by the end of main scope*/

    int n; cin >> n;
    int arr[N]; // Size must be known at compilation time
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // anothe way to make size in array dynamically..!
    int n; cin >> n;
    int *arr = new int[n];
    return 0;
}

