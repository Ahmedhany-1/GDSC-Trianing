#include <iostream>
using namespace std;

int main() {
	int arr[] { 3, 5, 7, 9 };

	int *ptr = arr;

	while (ptr != arr + 4)
		cout << *ptr++ << " ";
	cout<<"\n";		// 3 5 7 9

	ptr = arr;
	while (ptr != arr + 5)
		cout << *ptr++ << " ";
	cout<<"\n";		// 3 5 7 9  -520862016

	return 0;
}
