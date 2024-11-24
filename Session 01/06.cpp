#include <iostream>
using namespace std;

int main() {
	int arr[] { 3, 5, 7, 9 };

	// value of array is address: to first element
	cout << arr << "\n";	// 0x7f

	int &val = arr[0];

	cout << val << " " << &val << "\n";	// 3 0x7f
	cout << &arr[0] << "\n";	// 0x7f

	int *ptr = arr;
	// also value of ptr is address
	// 3 0x7f 0x2aa
	cout << *ptr << " " << ptr << " " << &ptr << "\n";

	// point to array: you can use it as same as array
	ptr[0] = 10, ptr[1] = 20;

	for (auto &val : arr)
		cout << val << " ";
	cout << "\n";	// 10 20 7 9

	return 0;
}
