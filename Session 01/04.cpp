#include <iostream>
#include <vector>
using namespace std;

int main() {

	double x = 10;
	double* ptr1 = &x;

	//double* ptr2 = NULL;	// C-style - OK

	// C++11
	double* ptr2 = nullptr;	// better [preferred]
	double* ptr3 = 0;		// ok also nullptr
	//double* ptre = 1;		// CE: 0 or address

	double *ptr4;	// Garbage - DON'T

	return 0;
}
