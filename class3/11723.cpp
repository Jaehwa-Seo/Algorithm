#include <iostream>

using namespace std;

int arr[21] = {0,};

void add(int num)
{
    arr[num] = 1;
}

void remove(int num)
{
    arr[num] = 0;
}

void check(int num)
{
    if(arr[num] == 1)
        cout << "1\n";
    else
        cout << "0\n";
}

void toggle(int num)
{
    if(arr[num] == 1)
        arr[num] = 0;
    else
        arr[num] = 1;
}

void all()
{
    for(int i=1;i<21;i++)
        arr[i] = 1;
}

void empty()
{
    for(int i=1;i<21;i++)
        arr[i] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m;

    cin >> m;

    for(int i=0;i<m;i++)
    {
        string order;
        int num;

        cin >> order;

        if(order == "add")
        {
            cin >> num;
            add(num);
        }
        else if(order == "remove")
        {
            cin >> num;
            remove(num);
        }
        else if(order == "check")
        {
            cin >> num;
            check(num);
        }
        else if(order == "toggle")
        {
            cin >> num;
            toggle(num);
        }
        else if(order == "all")
        {
            all();
        }
        else if(order == "empty")
        {
            empty();
        }
    }
}