#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    map<string,string> password;

    for(int i=0;i<n;i++)
    {
        string site, pwd;

        cin >> site >> pwd;

        password[site] = pwd;
    }

    for(int i=0;i<m;i++)
    {
        string name;

        cin >> name;

        cout << password[name] << "\n";
    }
}