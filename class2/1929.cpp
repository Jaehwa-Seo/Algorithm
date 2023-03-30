#include <iostream>
#include <vector>

using namespace std;

int prime[1000001];

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    int n,m;

    cin >> m >> n;

    for(int i=2;i<=n;i++)
    {
        prime[i] = i;
    }

    for(int i=2; i<=n;i++)
    {
        if(prime[i] == 0) continue;

        int num = prime[i];

        for(int j=i*2;j<=n;j+=i)
        {
            if(prime[j] % num == 0)
                prime[j] = 0;
        }
    }

    for(int i=m;i<=n;i++)
    {
        if(prime[i] != 0)
        {
            cout << prime[i] << "\n";
        }
    }
}