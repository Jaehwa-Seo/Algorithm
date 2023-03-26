#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    int num;

    cin >> num;

    for(int i=0;i<num;i++)
    {
        cin >> a;

        cout << a.substr(0,1) << a.substr(a.length()-1,1) << "\n";
    }
    

    return 0;
}