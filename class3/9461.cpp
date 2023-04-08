#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    long long D[101] = {0,};

    D[1] = 1;
    D[2] = 1;
    D[3] = 1;


    for(int i=0;i<T;i++)
    {
        int n;

        cin >> n;

        for(int j=4;j<=n;j++)
        {

            if(D[j] == 0)
                D[j] = D[j-3] + D[j-2];
        }

        cout << D[n] << "\n";
    }
}