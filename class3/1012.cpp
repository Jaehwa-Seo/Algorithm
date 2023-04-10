#include <iostream>

using namespace std;

int arr[50][50];
int M, N;

void dst(int x, int y)
{
    arr[x][y] = 0;
    if(arr[x-1][y] == 1 && x != 0) dst(x-1,y);
    if(arr[x][y-1] == 1 && y != 0) dst(x,y-1);
    if(arr[x+1][y] == 1 && x != M-1) dst(x+1,y);
    if(arr[x][y+1] == 1 && y != N-1) dst(x,y+1);
}


int main()
{
    int T, K;

    cin >> T;

    for(int test_case=0;test_case<T;test_case++)
    {
        cin >> M >> N >> K;

        arr[50][50] = {0,};

        for(int arr_cnt=0;arr_cnt<K;arr_cnt++)
        {
            int x,y;

            cin >> x >> y;

            arr[x][y] = 1;
        }

        int count = 0;
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(arr[i][j] == 1)
                {    
                    dst(i,j);
                    count++;
                }
            }
        }

        cout << count << "\n";
    }
}