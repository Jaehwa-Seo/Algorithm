#include <iostream>

using namespace std;

int main()
{
    int a, b, v;

    cin >> a >> b >> v;

    int move = a - b;
    int day;

    day = (v - b - 1) / move + 1 ;

    cout << day;

}