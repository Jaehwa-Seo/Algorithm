#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    map<string,int> poketmon;
    vector<string> name;

    for(int i=0;i<m;i++)
    {
        string tmp;
        cin >> tmp;

        poketmon[tmp] = i+1;
        name.push_back(tmp);
    }

    vector<string> result;

    for(int i=0;i<n;i++)
    {
        string input;
        cin >> input;   

        if(input[0] >= 65 && input[0] <= 90)
        {
            result.push_back(to_string(poketmon[input]));    
        }
        else
        {
            result.push_back(name[stoi(input)-1]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout << result[i] << "\n";
    }
}