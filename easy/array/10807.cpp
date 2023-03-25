#include <iostream>

using namespace std;

int main()
{
    int length;

    cin >> length;

    int* num = new int[length];

    for(int i=0;i<length;i++)
    {
        cin >> num[i];
    }

    int find_num;

    cin >> find_num;

    int cnt = 0;

    for(int i=0;i<length;i++)
    {
        if(num[i] == find_num)
            cnt++;
    }

    cout << cnt;
}