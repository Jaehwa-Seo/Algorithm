#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> number;

    int n;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;

        number.push_back(tmp);
    }

    sort(number.begin(),number.end());

    int m;

    cin >> m;

    for(int i=0;i<m;i++)
    {
        int tmp;
        cin >> tmp;
        cout << binary_search(number.begin(),number.end(),tmp) << "\n";
    }
}