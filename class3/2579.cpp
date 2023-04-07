#include <iostream>
#include <vector>

using namespace std;

int Max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int n;

    cin >> n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int *D = new int[n];

    D[0] = arr[0];
    D[1] = arr[0] + arr[1];
    D[2] = Max(arr[0]+ arr[2], arr[1]+arr[2]);


    for(int i=3;i<n;i++)
    {
        D[i] = Max(D[i-2] + arr[i],D[i-3] + arr[i-1]+ arr[i]);
    }

    cout << D[n-1];
}