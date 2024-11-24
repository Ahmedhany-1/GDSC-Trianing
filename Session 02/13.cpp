#include <iostream>
using namespace std;

int main() {

	int * arr = new int[5]; //Dynamically allocate memory for an array of 5 integers
    arr[0] = 10;

	delete[] arr;	// free the array

	//delete arr;
	// WRONG and will compile

	return 0;
}
