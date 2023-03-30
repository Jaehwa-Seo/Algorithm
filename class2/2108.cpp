#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int avg = 0;

    vector<int> number;

    for(int i=0;i<n;i++)
    {
        int tmp;

        cin >> tmp;

        avg += tmp;

        number.push_back(tmp);
    }

    sort(number.begin(),number.end());

    int count = 1;
    map<int,int> count;

    for(int i=0;i<n;i++)
    {
        if(!count[number[i]])
            count[number[i]] = 1;
        else
        {
            count[number[i]]++;
        }
    }

    for(int i=0;i<count.k;i++)
    {
        
    }

    // cout << avg / n << "\n";
    // cout << number[n/2] << "\n";
    // cout << count_max_number << "\n";
    // cout << number[n-1] - number[0] << "\n";
}