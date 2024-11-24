#include <iostream>
using namespace std;

struct emplyee {
	string name;
	int age;
	double salary;
	char gender;

    void read_employee() {
        cout<<"Enter employee 4 entries: ";
        cin >> name >> age;
        cin >> salary >> gender;
    }

    void print(){
        cout << name << " has salary :" << salary << '\n';
    }

    void setName(string newName){
        name = newName;
    }

    string getName(){
        return name;
    }
};

const int MAX = 10000;

emplyee emplyees_arr[MAX];
int added = 0;	// Number of employees

void print_employees() {
    for (int i = 0; i < added; ++i)
        print_employee(emplyees_arr[i]);
}


int main() {
	emplyees_arr[added++].read_employee();
	emplyees_arr[added++].read_employee();

	print_employees();
	return 0;
}

