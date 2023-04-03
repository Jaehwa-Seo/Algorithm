#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(true)
    {
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;

        int t1, t2, t3;

        if(a > b && a > c)
        {
            t1 = a;
            t2 = b;
            t3 = c;
        }
        else if(b > a && b > c)
        {
            t1 = b;
            t2 = a;
            t3 = c;
        }
        else if(c > a && c > b)
        {
            t1 = c;
            t2 = a;
            t3 = b;
        }

        if((t1 * t1) == (t2 * t2) + (t3 * t3))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }
}