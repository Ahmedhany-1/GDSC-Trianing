#include <iostream>
using namespace std;

int main() {
	int arr[] { 3, 5, 7, 9 };

	int *ptr = arr;

	// 0x7ffc528b6470 0x7ffc528b6470
	cout << ptr + 0 << " " << &arr[0] << "\n";
	// 0x7ffc528b6474 0x7ffc528b6474
	cout << ptr + 1 << " " << &arr[1] << "\n";
	// 0x7ffc528b6478 0x7ffc528b6478
	cout << ptr + 2 << " " << &arr[2] << "\n";

	// 3 3
	cout << *(ptr + 0) << " " << arr[0] << "\n";
	// 5 5
	cout << *(ptr + 1) << " " << arr[1] << "\n";
	// 7 7
	cout << *(ptr + 2) << " " << arr[2] << "\n";
	// 7 7
	cout << *(ptr + 2) << " " << *(arr + 2) << "\n";

	// arr[index] = subscript notation
	// *(ptr+2) = offset notation

	// 9 6 BE CAREFUL
	// *ptr + 3 = 3 + 3 = 6 = get value of current cell and increment 3
	// *(ptr + 3) = move to extra 3 cells then get value
	cout << *(ptr + 3) << " " << *ptr + 3 << "\n";


	return 0;
}
