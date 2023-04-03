#include <iostream>

using namespace std;

int main()
{
    int n;

    int count=1;
    int range = 1;

    cin >> n;
    if(n != 1)
    {
        while(true)
        {
            if(n > range && n <= range + (count*6))
                break;

            range += (count*6);
            count++;
        }

        cout << count+1;
    }
    else
        cout << 1;
}