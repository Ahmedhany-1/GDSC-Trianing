# GDSC-Trianing


# Assignment 1:
#### Problem:
- Create three `multiply` functions using overloading:
    1. **Multiply two `double` values.**
    2. **Multiply two `int` values.**
    3. **Multiply two `Point` structs** (struct with `x` and `y` coordinates) and return the result as the dot product:  
       `p1.x * p2.x + p1.y * p2.y`.
#### Solution:
```cpp
#include <iostream>
using namespace std;

// Struct to represent a Point with x and y coordinates
struct Point {
    int x, y;
};

// Function to multiply two doubles
double multiply(double a, double b) {
    return a * b;
}

// Function to multiply two ints
int multiply(int a, int b) {
    return a * b;
}

// Function to multiply two Point structs (dot product)
int multiply(Point p1, Point p2) {
    return p1.x * p2.x + p1.y * p2.y;
}

int main() {
    // Example usage of the overloaded multiply functions
    double d1 = 5.5, d2 = 2.2;
    int i1 = 3, i2 = 4;
    Point p1 = {2, 3}, p2 = {4, 5};

    // Multiply doubles
    cout << "Multiply doubles: " << multiply(d1, d2) << endl;
    
    // Multiply integers
    cout << "Multiply integers: " << multiply(i1, i2) << endl;

    // Multiply Points (dot product)
    cout << "Dot product of points: " << multiply(p1, p2) << endl;

    return 0;
}