#include <iostream>

using namespace std;

void z_input(int n, int number,int x, int y)
{
    if(n == 1)
    {
        arr[x][y] = number;
        arr[x+1][y] = number+1;
        arr[x][y+1] = number+2;
        arr[x+1][y+1] = number+3;
    }
    else
    {
        z_input(n/2,number+pow(4,n),x,y);
        z_input(n/2,number+(pow(4,n)*2),x+(2*n),y);
        z_input(n/2,number+(pow(4,n)*3),x,y+(2*n));
        z_input(n/2,number+(pow(4,n)*4),x+(2*n),y+(2*n));
    }
}
// 1 1
// 2 4
// 3 16
// 4 64
int main()
{
    int N, r, c;

    cin >> N >> r >> c;

    z_input(N,0,0,0);
}