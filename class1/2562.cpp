#include <iostream>

using namespace std;

int main()
{
    int a[9];

    int max=0, max_index=-1;

    for(int i=0;i<9;i++)
    {
        cin >> a[i];

        if(max < a[i])
        {
            max = a[i];
            max_index = i;
        }
    }

    cout << max << "\n" << max_index+1;
}