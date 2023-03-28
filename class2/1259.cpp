#include <iostream>
#include <cmath>

using namespace std;

int split_number(int a)
{
    int split[5];

    int count=0;

    while(a != 0)
    {
        split[count] = a % 10;

        a /= 10;

        count++;
    }

    int result = 0;

    for(int i=0;i<count;i++)
    {
        result = result + (split[i] * pow(10,(count-i-1)));
    }

    return result;
}

int main()
{
    int a;

    cin >> a;

    while(a!=0)
    {
        if(a <= 9)
            cout << "yes" << endl;
        else
        {
            int b = split_number(a);

            if(a==b)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        cin >> a;
    }
}