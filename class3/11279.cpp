#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    priority_queue<long long, vector<long long>, less<long long>> p_queue;

    for(int i=0;i<N;i++)
    {
        int x;

        cin >> x;

        if(x == 0)
        {
            if(p_queue.empty())
                cout << "0\n";
            else
            {
                cout << p_queue.top() << "\n";
                p_queue.pop();
            }
        }
        else
        {
            p_queue.push(x);
        }
    }
}