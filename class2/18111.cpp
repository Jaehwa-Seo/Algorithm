#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int ground[500][500];
    int n, m, b;

    vector<pair<int,int>> height;

    cin >> n >> m >> b;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int tmp
            cin >> tmp;
            ground[i][j] = tmp;
        }
    }
}