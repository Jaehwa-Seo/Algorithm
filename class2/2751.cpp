#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        int tmp;

        cin >> tmp;

        arr.push_back(tmp);
    }

    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\n";
    }
}