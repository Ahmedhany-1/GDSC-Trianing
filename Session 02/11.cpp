#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; // Dynamically allocate memory for an integer
    *ptr = 20;
    cout << *ptr; // Output 20
    delete ptr; // Free the allocated memory
	return 0;
}
