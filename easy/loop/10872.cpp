#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    long result = 1;
    for(int i=1;i<=a;i++)
        result *= i;
    
    cout << result;
}