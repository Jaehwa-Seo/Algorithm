#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int D[1000];

    D[0] = 1;
    D[1] = 3;

    for(int i=2;i<n;i++)
    {
        D[i] = (D[i-1] + (2*D[i-2])) % 10007;;
    }

    cout << D[n-1];
}
