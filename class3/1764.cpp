#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<string> name;
    vector<string> result;

    for(int i=0;i<n;i++)
    {
        string tmp;

        cin >> tmp;

        name.push_back(tmp);
    }

    sort(name.begin(),name.end());

    for(int i=0;i<m;i++)
    {
        string tmp;
        
        cin >> tmp;

        if(binary_search(name.begin(),name.end(),tmp))
        {
            result.push_back(tmp);
        }
    }
    sort(result.begin(),result.end());

    cout << result.size() << "\n";
    for(int i=0;i<result.size();i++)
    {
        cout << result[i] << "\n";
    }
}