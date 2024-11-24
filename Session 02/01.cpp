#include <vector>
#include <iostream>
using namespace std;

int main() {
	int age = 55;
	// 55 0x7ffd2db713a4
	cout << age << " " << &age << "\n";

	int &ref1 = age;
	// 55 0x7ffd2db713a4
	cout << ref1 << " " << &ref1 << "\n";

	int &ref2 = ref1;
	// 55 0x7ffd2db713a4
	cout << ref2 << " " << &ref2 << "\n";

	// You can change value.
	ref1 = 10;

	// All variables pointing to same memory change
	// 10 10 10
	cout << age << " " << ref1 << " " << ref2 << "\n";

	return 0;
}
