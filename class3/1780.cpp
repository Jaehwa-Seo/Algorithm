#include <iostream>

using namespace std;

int arr[2187][2187];

int count_m1=0, count_p1=0, count_0=0;

void count_card(int start_x, int start_y, int length)
{
    // cout << start_x << " " << start_y << " " << length << "\n";
    int number = arr[start_x][start_y];

    bool is_same = true;

    for(int i=start_x;i<start_x+length;i++)
    {
        for(int j=start_y;j<start_y+length;j++)
        {
            if(number != arr[i][j])
                is_same = false;
        }
    }

    if(is_same)
    {
        if(number == -1)
            count_m1++;
        else if(number == 1)
            count_p1++;
        else
            count_0++;
    }
    else
    {
        for(int i=start_x;i<start_x+length; i+=(length/3))
        {
            for(int j=start_y;j<start_y+length; j+=(length/3))
            {
                count_card(i,j,length/3);
            }
        }
    }
}

int main()
{
    int N;

    cin >> N;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> arr[i][j];
        }
    }

    count_card(0,0,N);

    cout << count_m1 << "\n";
    cout << count_0 << "\n";
    cout << count_p1 << "\n";
}