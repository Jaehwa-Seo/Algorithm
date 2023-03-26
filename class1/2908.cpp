#include <iostream>

using namespace std;

int number_change(int a)
{
    int b[3];

    b[0] = a % 10;
    a/=10;
    b[1] = a % 10;
    b[2] = a / 10;

    return b[0] * 100 + b[1] * 10 + b[2];
}

int main()
{
    int a,b;

    cin >> a >> b;

    a = number_change(a);
    b = number_change(b);

    if(a > b)
        cout << a;
    else
        cout << b;
}