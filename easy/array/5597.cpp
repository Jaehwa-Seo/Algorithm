#include <iostream>

using namespace std;

int main()
{
    int num[30] = {0,};


    for(int i=0;i<28;i++)
    {
        int a;
        cin >> a;

        num[a-1] = 1;
    }

    for(int i=0;i<30;i++)
    {
        if(num[i] == 0)
            cout << i+1 << "\n";
    }
}