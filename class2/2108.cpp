#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int avg = 0;

    vector<int> number;

    int arr[8001] = {0,};

    for(int i=0;i<n;i++)
    {
        int tmp;

        cin >> tmp;

        avg += tmp;

        number.push_back(tmp);

        arr[tmp+4000]++;
    }

    sort(number.begin(),number.end());

    int count = 0;

    vector<int> cnt;

    for(int i=-4000;i<4001;i++)
    {
        if(count < arr[i+4000])
        {
            count = arr[i+4000];

            cnt.clear();
            cnt.push_back(i);
        }
        else if(count == arr[i+4000])
        {
            cnt.push_back(i);
        }
    }

    cout << (int)round((double)avg / n) << "\n";
    cout << number[n/2] << "\n";
    if(cnt.size() >=2)
        cout << cnt[1] << "\n";
    else
        cout << cnt[0] << "\n";
    cout << number[n-1] - number[0] << "\n";
}