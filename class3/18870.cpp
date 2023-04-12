#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m;
    cin >> m;

    vector<int> real_pos;
    vector<int> pos;

    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;

        pos.push_back(x);
        real_pos.push_back(x);
    }
    sort(pos.begin(),pos.end());
    pos.erase(unique(pos.begin(),pos.end()), pos.end());

    for(int i=0;i<m;i++)
    {
        int target = real_pos[i];

        
        cout << lower_bound(pos.begin(),pos.end(),target) - pos.begin() << " ";
    }
}