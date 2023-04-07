#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int D[11] = {0,};

    D[1] = 1;
    D[2] = 2;
    D[3] = 4;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;

        if(D[tmp] == 0)
        {
            for(int j=4;j<=tmp;j++)
            {
                if(D[j] != 0)
                    continue;
                
                D[j] = D[j-1] + D[j-2] + D[j-3];
            }           
        }

         cout << D[tmp] <<"\n";
    }
}