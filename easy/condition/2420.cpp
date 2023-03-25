#include <iostream>

using namespace std;

int main()
{
    long a,b;

    cin >> a >> b;

    long result = a-b;
    if(result < 0)
        cout << result * -1;
    else
        cout << result;
}