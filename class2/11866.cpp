#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int *arr = new int[n];

    queue<int> result;

    for(int i=0;i<n;i++)
    {
        arr[i] = 1;
    }

    int index = 0;
    int cnt = 1;
    while(result.size() != n)
    {
        if(arr[index] == 1)
        {
            if(cnt == k)
            {
                result.push(index);
                arr[index] = 0;
                cnt = 1;
            }
            else
                cnt++;
        }
        if(index != n-1)
            index++;
        else    
            index = 0;
    }

    cout << "<";
    for(int i=0;i<n;i++)
    {
        cout << result.front()+1;
        result.pop();
        if(!result.empty())
            cout << ", ";
    }
    cout << ">";
}