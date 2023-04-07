#include <iostream>

using namespace std;

int main()
{
    int coin[10];

    int n, k;

    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        cin >> coin[i];
    }

    int index = n-1;

    int cnt = 0;

    while(k != 0)
    {
        if(coin[index] <= k)
        {
            k -= coin[index];
            cnt++;
        }
        else index --;
    }
    
    cout << cnt;
}