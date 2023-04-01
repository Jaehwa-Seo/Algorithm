#include <iostream>

using namespace std;

int creator(int n)
{
    int result = n;

    while(n > 0)
    {
        result += n % 10;
        n /= 10;
    } 

    return result;
}

int main()
{
    int n;

    cin >> n;
    
    bool flag = true;

    for(int i=0;i<n;i++)
    {
        if(creator(i) == n)
        {
            cout << i;
            flag = false;
            break;
        }
    }
    if(flag)
        cout << 0;
}