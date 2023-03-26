#include <iostream>
#include <string>

using namespace std;

void print_origin_num(int a[])
{
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum += a[i] * a[i];
    }

    cout << sum % 10;
}

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }

    print_origin_num(a);
}