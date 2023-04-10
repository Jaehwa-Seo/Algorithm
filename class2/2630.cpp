#include <iostream>

using namespace std;

int arr[128][128];

int count_b=0, count_w=0;

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
        if(number == 1)
            count_b++;
        else if(number == 0)
            count_w++;
    }
    else
    {
        for(int i=start_x;i<start_x+length; i+=(length/2))
        {
            for(int j=start_y;j<start_y+length; j+=(length/2))
            {
                count_card(i,j,length/2);
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

    cout << count_w << "\n";
    cout << count_b << "\n";
}