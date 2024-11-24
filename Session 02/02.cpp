#include <vector>
#include <iostream>
using namespace std;

int main() {
	int age = 55;
	int &ref = age;
	int another = 3;

	// can't re-assign it to a new address
	//ref = &another;		WRONG

	// Must be initialized to a declared variable
	//int &ref2;		WRONG
	//int &ref2 = 3;	WRONG

	// Must be of same type
	double val = 10;
	//int &ref3 = val;	WRONG



	return 0;
}
