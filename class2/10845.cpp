#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> queue_num;

    int n;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        string command;

        cin >> command;

        if(command == "push")
        {
            int tmp;
            cin >> tmp;

            queue_num.push(tmp);
        }
        else if(command == "pop")
        {
            if(!queue_num.empty())
            {
                cout << queue_num.front() << "\n";
                queue_num.pop();
            }
            else
                cout << "-1\n";
        }
        else if(command == "front")
        {
            if(!queue_num.empty())
                cout << queue_num.front() << "\n";
            else
                cout << "-1\n";
        }
        else if(command == "back")
        {
            if(!queue_num.empty())
                cout << queue_num.back() << "\n";
            else
                cout << "-1\n";
        }
        else if(command == "size")
        {
            cout << queue_num.size() << "\n";
        }
        else if(command == "empty")
        {
            if(queue_num.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
    }
}