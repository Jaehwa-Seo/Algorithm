#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;
    int max = -1000000;
    int min = 1000000;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;

        if(max < n)
            max = n;
        if(min > n)
            min = n;
    }

    cout << min << " " << max;

}