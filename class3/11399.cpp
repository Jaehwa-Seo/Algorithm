#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> time;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;

        time.push_back(tmp);
    }

    sort(time.begin(),time.end());

    int result = 0;
    int take_time = 0;

    for(int i=0;i<n;i++)
    {
        take_time += time[i];

        result += take_time;
    }

    cout << result;
    
}