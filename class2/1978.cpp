#include <iostream>

using namespace std;



int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int prime[1001];

    for(int i=2;i<=1000;i++)
    {
        prime[i] = i;
    }

    for(int i=2; i<=1000;i++)
    {
        if(prime[i] == 0) continue;

        int num = prime[i];

        for(int j=i*2;j<=1000;j+=i)
        {
            if(prime[j] % num == 0)
                prime[j] = 0;
        }
    }

    prime[1] = 0;

    
    int n,m;

    cin >> n;

    int count = 0;

    for(int i=0;i<n;i++)
    {
        cin >> m;

        if(prime[m] != 0)
            count ++;
    }

    cout << count;
}