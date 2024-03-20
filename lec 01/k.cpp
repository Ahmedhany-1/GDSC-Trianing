#include <iostream>
using namespace std;

struct student  
{
    int x;
    int y;
};

int main()
{
    cout << "Enter your x and y : ";
    student s1;
    cin >> s1.x >> s1.y;
    cout <<"the x of the student is :"<< s1.x << " and y of the student is : "<< s1.y; 
    return 0;
}   