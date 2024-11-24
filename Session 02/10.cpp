#include <iostream>
using namespace std;

int main() {

	int val1 = 20;
	int val2 = 30;

	// The data type is const int, so pointer must be const int*
	const int val3 = 40;

	// 1) Pointer to constant
	const int* ptr1 = &val1;
	//*ptr = 20;	CAN'T change data it points to

	// But can change pointer value itself.
	// Notice also val3 is const int
	ptr1 = &val3;

	/////////////////////////////////////////////
	// 2) Constant pointers
	int * const	ptr2 = &val2;
	*ptr2 = 11;		// Ok
	//ptr2 = &val2;	// NO Pointer itself is constant

	// CAN'T. val3 is const int, and we must use const int*
	//int * const ptr3 = &val3;

	/////////////////////////////////////////////

	// 3) Const pointers to const
	const int * const ptr4 = &val1;
	//*ptr4 = 10;		// can't change data it points to
	//ptr4 = &val3;		// can't change its value





	return 0;
}
