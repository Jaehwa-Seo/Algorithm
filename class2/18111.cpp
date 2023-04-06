#include <iostream>

using namespace std;

int main()
{
    int ground[500][500];
    int n, m, b;

    int result_time = 0x7f7f7f7f, result_height = -1;

    cin >> n >> m >> b;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> ground[i][j];
        }
    }
    
    for(int height=0;height<=256;height++)
    {
        int build = 0, remove = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int diff = height - ground[i][j];

                if(diff > 0) build += diff;
                else remove += (diff * -1);
            }
        }

        if(build <= b + remove)
        {
            int time = (build * 1) + (remove * 2);

            if(time <= result_time)
            {
                if(result_height < height)
                {
                    result_time = time;
                    result_height = height;
                }
            }
        }
    }

    cout << result_time << " " << result_height;
}