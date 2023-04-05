#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long M = 1234567891;
    long long result = 0;

    int l;

    cin >> l;
    
    string hash;

    cin >> hash;

    long long r = 1;
    for(int i=0;i<l;i++)
    {
        long long tmp = hash[i] - 96;

        result = (result + tmp * r) % M;

        r = (r * 31) % M;
    }

    cout << result;
}
