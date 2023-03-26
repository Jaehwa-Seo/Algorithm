#include <iostream>

using namespace std;

void check_ascending(int sound[], int count)
{
    if(sound[count] == 8 && count == 7)
        cout << "ascending";
    else if(sound[count] == (count+1))
        check_ascending(sound,++count);
    else
        cout << "mixed";
}

void check_decending(int sound[], int count)
{
    if(sound[count] == 1 && count == 7)
        cout << "descending";
    else if(sound[count] == (8-count))
        check_decending(sound,++count);
    else
        cout << "mixed";
}


int main()
{
    int sound[8];

    

    for(int i=0;i<8;i++)
    {
        cin >> sound[i];
    }

    if(sound[0] == 1)
        check_ascending(sound,0);
    else if(sound[0] == 8)
        check_decending(sound,0);
    else   
        cout << "mixed";
}