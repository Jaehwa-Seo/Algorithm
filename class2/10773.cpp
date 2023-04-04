#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int k;
    
    stack<int> num;

    cin >> k;

    for(int i=0;i<k;i++)
    {
        int tmp;

        cin >> tmp;

        if(tmp != 0)
            num.push(tmp);
        else
            num.pop();
    }

    int sum=0;

    while(!num.empty())
    {
        sum += num.top();
        num.pop();
    }

    cout << sum;
}