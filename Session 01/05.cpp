#include <iostream>
using namespace std;

int main() {

	int val1 = 5, val2 = 15;

// 0x21fd 0x7f12
	cout << &val1 << " " << &val2 << "\n";

	int * p1 = &val1, *p2;
	p2 = &val2;

// [value pointed to by p1 = val1] = 10
	*p1 = 10;

//  [value pointed to by p2 = val2] = [value pointed to by p1 = 16]
	*p2 = *p1 + 6;

	cout << val1 << " " << val2 << "\n";	// 10 16

	p1 = p2;           // let p1 points to where p2 points = &val2
// 0x7f12 0x7f12
	cout << p1 << " " << p2 << "\n";

	*p1 = 20;          // value pointed to by p1 = 20

	cout << val1 << " " << val2 << "\n";
	cout << *p1 << " " << *p2 << "\n";

	p1 = &val1;
	cout << *p1 << " " << *p2 << "\n";	// 10 20
	swap(p1, p2);
	cout << *p1 << " " << *p2 << "\n";	// 20 10

	double x = 10;
	// p1 = &x;		// CE: cannot convert ‘double*’ to ‘int*’

	return 0;
}
