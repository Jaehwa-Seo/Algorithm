#include <iostream>

using namespace std;

void devide_10(int num,int *two, int *five)
{
    while(num % 2 == 0)
    {
        num /= 2;
        *two = *two + 1;
    }
    
    while(num % 5 == 0)
    {
        num /= 5;
        *five = *five + 1;
    }
}

int main()
{
    int n;

    int two = 0, five = 0;

    cin >> n;

    for(int i=1;i<=n;i++)
    {
        devide_10(i, &two,&five);
    }

    if(two >= five)
        cout << five;
    else
        cout << two;
}