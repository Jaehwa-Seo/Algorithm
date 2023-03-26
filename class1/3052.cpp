#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int> count;
    
    for(int i=0;i<10;i++)
    {
        int n;
        cin >> n;

        count[n%42] = 1;
    }
    cout << count.size();
}