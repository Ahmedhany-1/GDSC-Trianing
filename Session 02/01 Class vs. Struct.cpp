#include <iostream>
using namespace std;

// Class in C++
class Person{
private:
    string name;
public:
    void setName(string newName){
        name = newName;
    }
    string getName(){
        return name ;
    }
};

// struct in C++
struct Point{
    double x;
    double y;
};
int main(){
   freopen("out.txt", "w", stdout);


    return 0;
}