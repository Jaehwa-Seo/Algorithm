#include <iostream>
#include <algorithm>

using namespace std;

int D[50001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    D[1] = 1;

    for(int i=1;i<=n;i++)
    {
        D[i] = D[1] + D[i-1];
        for(int j=2;j*j <=i;j++)
        {
            D[i] = min(D[i], 1+D[i-j*j]);
        }
    }

    cout << D[n];
}