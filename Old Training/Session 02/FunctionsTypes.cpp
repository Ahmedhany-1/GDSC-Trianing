#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

/*
void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
*/
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    // Functions Types (pass by value - pass by ref - pass by pointers)
    int a, b;
    cin >> a >> b; // 2 5

    swap(a, b);
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
