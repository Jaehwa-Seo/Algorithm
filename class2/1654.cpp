#include <iostream>

using namespace std;

int main()
{
    int k, n;

    int line[10000];

    cin >> k >> n;

    long long low = 1, high=0, middle;

    for(int i=0;i<k;i++)
    {
        cin >> line[i];

        if(high < line[i])
            high = line[i];
    }

    int answer = 0;

    while(low <= high)
    {
        int cnt = 0;
        middle = (high + low) / 2;
        
        for(int i=0;i<k;i++)
            cnt += line[i] / middle;

        if(cnt >= n)
        {
            low = middle +1;
            if(answer < middle) answer = middle;
        }
        else
            high = middle -1;
    }

    cout << answer;
}