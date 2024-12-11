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
