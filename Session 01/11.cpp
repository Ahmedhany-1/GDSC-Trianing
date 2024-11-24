#include <iostream>
using namespace std;

int main() {
	int arr[] { 3, 5, 7, 9 };

	int *ptr = arr;
	cout << *ptr << "\n";	// 3

	++ptr;				// move to next memory cell
	cout << *ptr << "\n";	// 5

	cout << *ptr++ << "\n";	// 5
	cout << *ptr << "\n";	// 7

	cout << *++ptr << "\n";	// 9
	cout << *ptr << "\n";	// 9

	cout << *--ptr << "\n";	// 7
	cout << *ptr << "\n";	// 7

	ptr -= 2;	// go back 2 positions
	cout << *ptr << "\n";	// 3

	--ptr;	// now this is 1 step before array. BE CAREFUL
	//++arr;	CE

	ptr = arr + 3;
	cout << ptr - arr << "\n";	// 3 cells

	ptr = arr;
	cout << ++*ptr << "\n";		// get value then increment 4
	cout << ptr - arr << "\n";	// 0 = still same location

	return 0;
}
