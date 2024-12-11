#include <iostream>
using namespace std;

class Example {
public:
    Example() { cout << "Constructor Called\n"; }
    ~Example() { cout << "Destructor Called\n"; }
};

void testFunction() {
    Example normalObject;      // Normal object
    static Example staticObject; // Static object
    cout << "In testFunction\n";
}

int main() {
    cout << "First call to testFunction:\n";
    testFunction(); // Creates and destroys `normalObject`, but keeps `staticObject`

    cout << "\nSecond call to testFunction:\n";
    testFunction(); // Creates a new `normalObject`, `staticObject` is reused

    return 0;
}
