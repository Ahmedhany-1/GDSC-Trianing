#include<iostream>
#include<vector>
using namespace std;

void hello() {
    int i1 = 0;
    static int i2 = 0;

    cout<<i1<<" "<<i2<<"\n";
    i1 ++;
    i2 ++;
}

int main()
{
    hello(); // 0 0
    hello(); // 0 1
    hello(); // 0 2
    return 0;
}
