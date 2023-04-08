#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;

    cin >> n >> m;

    int* number = new int[n+1];

    for(int i=1;i<=n;i++)
    {
        cin >> number[i];

        number[i] += number[i-1];
    }
    
    for(int i=0;i<m;i++)
    {
        int a,b;

        cin >> a >> b;

        cout << number[b] - number[a-1] << "\n"; 
    }

}