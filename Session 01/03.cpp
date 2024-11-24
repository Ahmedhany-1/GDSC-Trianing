#include <iostream>
using namespace std;

int main() {

	int val = 15;
	int &ref = val;

	// 15 0x7f1
	cout << val << " " << &val << "\n";
	// 15 0x7f1
	cout << ref << " " << &ref << "\n";

	int *ptr = &val;
	// 15 0x7f1 0x9f2
	cout << *ptr << " " << ptr << " " << &ptr << "\n";

	*ptr = 20;
	// 20 20 20
	cout << val << " " << ref << " " << *ptr << "\n";

	int another = 30;
	// 30 0x1afd
	cout << another << " " << &another << "\n";

	ptr = &another;
	// 30 0x1afd 0x9f2       (0x9f2 did not change)
	cout << *ptr << " " << ptr << " " << &ptr << "\n";

	*ptr = 50;
	// 20 50 50
	cout << val << " " << another << " " << *ptr << "\n";

	ptr = nullptr;	// point to nothing

	if(!ptr)
		cout<<"NULL\n";
	// NULL


	return 0;
}
