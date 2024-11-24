#include <iostream>
using namespace std;

int mul(int a, int b){
    return a * b;
}

int mul(double a, double b){
    return a * b;
}

int mul(int a, int b , int c){
    return a * b * c;
}
int main(){
    cout << mul(3, 4) << '\n';
    cout << mul(3.0, 4.0) << '\n';
    cout << mul(3, 4 , 1) << '\n';

    return 0;
}