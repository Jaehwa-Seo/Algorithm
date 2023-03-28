#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    int count = 0;
    int number = 0;

    while(count != n)
    {
        number ++;
        int tmp = number;
        while(tmp != 0)
        {
            if(tmp % 1000 == 666)
            {
                count ++;
                break;
            }
            else
                tmp /= 10;
        }

        
    }

    cout << number;
}