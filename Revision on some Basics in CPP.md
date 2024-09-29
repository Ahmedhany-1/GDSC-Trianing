### Part 1: Basic Input/output and Type Casting
```cpp
// Input/Output
cout << "Hello";
int x;
cin >> x;
cout << x  <<"\n" << "Hi";

// Implicit Casting (No Data Loss)
double Num = x;

// Explicit Casting
int Num2 = (int)Num;
```
#### Notes:
- **Input/Output:** Use `cin` for input and `cout` for output.
- **Implicit Casting:** Automatically converts a smaller type (int) to a larger type (double) without data loss.
- **Explicit Casting:** Requires explicitly converting a larger type (double) to a smaller type (int), which may lose data.
---

### Part 2: Function Overloading and Default Parameters
```cpp
// Default Parameters
int res1 = sum(4);       // Uses default y = 6
int res2 = sum(4, 7);    // Both parameters are passed

// Function Overloading
int res3 = sum(5, 7, 9);    // Overloaded function with 3 parameters
double res4 = sum(4.2, 8.6); // Overloaded function for doubles
float res5 = sum(4.4f, 8.7f); // Overloaded function for floats
```
#### Notes:
- Default Parameters:  
	You can provide default values for function parameters. If a parameter is not passed by the caller, the default value is used. In this case, `y` has a default value of 6.
```cpp
	int sum(int x, int y = 6) {
    return x + y;
}
```
##### When you call `sum()`, C++ decides which version to use based on the arguments you pass. For example, if you pass `double` values, the version of `sum` that accepts `double` will be called.

---
### Part 3 : Pointers in C++
#### 1. **What is a Pointer?**
- A pointer is a variable that stores the **memory address** of another variable.
- A pointer's data type indicates the type of data it points to (e.g., `int*` points to an integer).
```cpp
int* ptr;  // Declares a pointer to an integer
// `ptr` is a pointer variable that can hold the address of an `int` variable.
int x = 10;
int* ptr = &x;  // ptr holds the address of x
```
#### 2. **Dereferencing Pointers**
- Dereferencing a pointer means accessing the value stored in the memory address the pointer holds.
    `*ptr`
```cpp
int x = 10;
int* ptr = &x;
cout << *ptr;  // Outputs 10, the value of x
```
#### 3. **Pointer Arithmetic**
- Pointers can be incremented or decremented to point to the next or previous memory location, especially in arrays.
```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;  // Points to the first element of the array
cout << *ptr;    // Outputs 10
ptr++;           // Move to the next element
cout << *ptr;    // Outputs 20
```
#### 4. **Null Pointers**
- A pointer can be assigned the value `nullptr` to indicate it points to nothing.
```cpp
int* ptr = nullptr;  // Pointer currently points to nothing
if (ptr == nullptr) {
    cout << "Pointer is null";
}
```
#### 5. **Pointers and Arrays**
- The name of an array is essentially a pointer to the first element of the array.
```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;  // Same as int* ptr = &arr[0];
cout << *ptr;    // Outputs 10 (first element)
```
- Accessing array elements using pointer arithmetic:
```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;
for (int i = 0; i < 3; i++) {
    cout << *(ptr + i);  // Outputs 10, 20, 30
}
```

#### 6.**Passing Pointers to Functions**
- Pointers allow functions to modify variables outside their scope.
```cpp
void increment(int* ptr) {
    (*ptr)++;  // Dereference pointer and increment the value it points to
}
int main() {
    int x = 10;
    increment(&x);  // Pass address of x to modify it
    cout << x;  // Outputs 11
}
```
#### 7. **Pointers to Pointers**
- A pointer can store the address of another pointer, which is useful in dynamic memory management.
```cpp
int x = 10;
int* ptr = &x;      // Pointer to int
int** ptr2 = &ptr;  // Pointer to a pointer
cout << **ptr2;     // Outputs 10
```
#### 8. **Dynamic Memory Allocation**
- Dynamic memory is allocated using pointers and the `new` keyword. The `delete` keyword frees the allocated memory.
```cpp
int* ptr = new int;  // Dynamically allocate memory for an integer
*ptr = 20;
cout << *ptr;  // Outputs 20
delete ptr;    // Free the allocated memory
```
- For arrays.
```cpp
int* arr = new int[5];  // Dynamically allocate memory for an array of 5 integers
arr[0] = 10;
delete[] arr;           // Free the allocated memory
```
#### 9. **Common Mistakes with Pointers**
- **Dereferencing a null or uninitialized pointer**:
    - Can lead to undefined behavior. Always initialize pointers.
- **Memory leaks**:
    - Not freeing dynamically allocated memory with `delete` or `delete[]` leads to memory leaks.
#### 10. **Examples**
- Swapping Two Numbers Using Pointers
```cpp
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);  // Pass addresses of x and y
    cout << "x: " << x << " y: " << y;  // Outputs x: 20 y: 10
}
```
- Dynamic Array Example
```cpp
int main() {
    int size = 5;
    int* arr = new int[size];  // Dynamically allocate an array

    // Fill array
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }

    // Print array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Outputs: 0 10 20 30 40
    }

    delete[] arr;  // Free dynamically allocated array
    return 0;
}
```

---
### Part 4: Pass by Address & Reference
```cpp
// Pointers and References
int Swap1 = 6, Swap2 = 5;

// Pass by Pointer
SwapPointer(&Swap1, &Swap2);

// Pass by Reference
SwapReference(Swap1, Swap2);
```
#### Notes:
##### **1. Pass by Value:**  
When you pass variables to a function by value (the default method), a copy of the variables is created. Any changes inside the function do not affect the original variables.  
Example:
```cpp
void Swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
```
##### In the above code, `x` and `y` are copies of the original variables. When the function ends, the original variables remain unchanged.
##### **2. Pass by Pointer:**  
Passing by pointer means sending the memory address of the variable to the function. Inside the function, the actual value in that memory location can be modified.
Example:
```cpp
void SwapPointer(int* x, int* y) {
    int temp = *x; // Dereferencing pointer to get the actual value
    *x = *y;
    *y = temp;
}
```
##### When `&Swap1` and `&Swap2` are passed to `SwapPointer()`, the memory addresses of `Swap1` and `Swap2` are passed, allowing the function to modify their actual values.

##### **3. Pass by Reference:**
Passing by reference is similar to passing by pointer but without using the `*` symbol. A reference is essentially an alias to the original variable, so any changes in the function affect the original variable directly.
Example:
```cpp
void SwapReference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
```
##### Here, the `&` symbol in the function declaration means `x` and `y` are references, not copies, so any changes to them affect the original variables directly.
---

### Part 5: Arrays and Dynamic Memory Allocation
```cpp
int arr[3]; // Static allocation
arr[0] = 5;

int *arrH = new int[4]; // Dynamic allocation
arrH[1] = 8;
*(arrH + 1) = 9;

int *arrP[4];  // Array of pointers
arrP[0] = arrH;
arrP[1] = &x;
```
#### Notes:
- **Static Arrays:** Arrays are collections of elements of the same type. In static allocation, the size is fixed at compile time, and memory is automatically managed by C++.
```cpp
int arr[3]; // Can hold 3 integers
arr[0] = 5; // Accessing the first element
```

- **Dynamic Arrays:** Dynamic arrays are created at runtime using `new`. This allows more flexibility in determining the size of the array during execution. You are responsible for managing the memory, including freeing it with `delete[]` when no longer needed.
```cpp
int *arrH = new int[4]; // Create an array of 4 integers
arrH[1] = 8; // Accessing second element
```

- **Array of Pointers:** SYou can create an array where each element is a pointer. This is useful for managing arrays of dynamically allocated objects or elements.
```cpp
int *arrP[4];  // Array of pointers
arrP[0] = arrH; // First pointer points to the dynamically allocated array
```

---

### Part 6: Structs and Object-Oriented Programming
```cpp
// Struct Definition
struct Employee {
    int age;
    string name;
};

// Object Creation
Employee emp;
emp.name = "Ali";
emp.age = 15;
cout << emp.name << endl << emp.age << endl;

// Dynamic Struct Allocation
Employee *empP = new Employee();
empP->name = "Ahmed";
empP->age = 18;
cout << empP->name << endl << empP->age << endl;

// Array of Structs : Store multiple instances of a struct in an array.
Employee emps[3];
for (int i = 0; i < 3; i++) {
    emps[i].name = "ASD";
    emps[i].age = 20;
}
```
#### Notes:
- **Structs:** A `struct` is a way to group related variables under one name. In object-oriented programming, structs are used to define objects with properties.
```cpp
struct Employee {
    int age;
    string name;
};
Employee emp;
emp.name = "John";
emp.age = 25;
```

- **Dynamic Structs:** Similar to arrays, structs can be dynamically allocated using `new`. This is useful when you need to create an object at runtime.
```cpp
Employee *empP = new Employee();
empP->name = "Sarah";
empP->age = 30;
```

---
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
```


---
# Assignment 2:

#### Problem:
- Create a `Student` struct with fields `name`, `age`, and `address`.
- Implement:
    - An array of `Student` objects  statically 
    - An array of pointers where each pointer points to a dynamically allocated **array of students**. 
    - Functions to:
        1. **Fill an array** of students (static and dynamic).
        2. **Print the array** of students.
- Implement the static array of `Student` and fill it and **Try to make it Dynamically if you can**
#### Solution:
##### part1
```cpp
#include <iostream>
#include <string>
using namespace std;

// Struct to represent a Student
struct Student {
    string name;
    int age;
    string address;
};

// Function to fill a statically allocated array of students
void fillArray(Student std[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> std[i].name;
        cout << "Age: ";
        cin >> std[i].age;
        cout << "Address: ";
        cin >> std[i].address;
    }
}

// Function to print a statically allocated array of students
void printArray(Student std[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << ": " 
             << std[i].name << ", Age: " 
             << std[i].age << ", Address: " 
             << std[i].address << endl;
    }
}

int main() {
    int size = 3; // Number of students

    // Statically allocated array of students
    Student students[size];

    // Fill the array of students
    fillArray(students, size);

    // Print the array of students
    printArray(students, size);

    return 0;
}
```
##### Part 2
```cpp
#include <iostream>
#include <string>
using namespace std;

// Struct to represent a Student
struct Student {
    string name;
    int age;
    string address;
};

// Function to fill a dynamically allocated array of arrays of students
void fillArray(Student** std, int arrCount, int studentPerArray) {
    for (int i = 0; i < arrCount; i++) {
        std[i] = new Student[studentPerArray]; // Each pointer points to an array of students
        cout << "Filling student array " << i + 1 << " of size " << studentPerArray << endl;
        for (int j = 0; j < studentPerArray; j++) {
            cout << "Enter details for student " << j + 1 << endl;
            cout << "Name: ";
            cin >> std[i][j].name;
            cout << "Age: ";
            cin >> std[i][j].age;
            cout << "Address: ";
            cin >> std[i][j].address;
        }
    }
}

// Function to print a dynamically allocated array of arrays of students
void printArray(Student** std, int arrCount, int studentPerArray) {
    for (int i = 0; i < arrCount; i++) {
        cout << "Printing student array " << i + 1 << ":" << endl;
        for (int j = 0; j < studentPerArray; j++) {
            cout << "Student " << j + 1 << ": " 
                 << std[i][j].name << ", Age: " 
                 << std[i][j].age << ", Address: " 
                 << std[i][j].address << endl;
        }
    }
}

int main() {
    int arrCount = 2; // Number of student arrays
    int studentPerArray = 3; // Number of students per array

    // Dynamically allocate an array of pointers to arrays of students
    Student** studentArrays = new Student*[arrCount];

    // Fill each student array
    fillArray(studentArrays, arrCount, studentPerArray);

    // Print each student array
    printArray(studentArrays, arrCount, studentPerArray);

    // Cleanup dynamic memory
    for (int i = 0; i < arrCount; i++) {
        delete[] studentArrays[i]; // Delete each array of students
    }
    delete[] studentArrays; // Delete the array of pointers

    return 0;
}

```

---
