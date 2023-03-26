#include <iostream>
#include <string>

using namespace std;

long long calculate(long long a,long long b)
{
    return (a+b) * (a-b);
}

int main()
{
    long long a,b;

    cin >> a >> b;

    cout << calculate(a,b);

    return 0;
}