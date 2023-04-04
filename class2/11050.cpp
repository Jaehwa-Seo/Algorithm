#include <iostream>

using namespace std;

int factorial(int a)
{
    int result = 1;
    for(int i=1;i<=a;i++)
        result *= i;
    
    return result;
}

int main()
{
    int n,k;

    cin >> n >> k;

    cout << factorial(n) / (factorial(n-k) * factorial(k)) ;
}