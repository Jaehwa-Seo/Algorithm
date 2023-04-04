#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> deque_num;
    
    int n;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        string command;

        cin >> command;

        if(command == "push_front")
        {
            int tmp;
            cin >> tmp;

            deque_num.push_front(tmp);
        }
        else if(command == "push_back")
        {
            int tmp;
            cin >> tmp;

            deque_num.push_back(tmp);
        }
        else if(command == "pop_front")
        {
            if(!deque_num.empty())
            {
                cout << deque_num.front() << "\n";
                deque_num.pop_front();
            }
            else
                cout << "-1\n";
        }
        else if(command == "pop_back")
        {
            if(!deque_num.empty())
            {
                cout << deque_num.back() << "\n";
                deque_num.pop_back();
            }
            else
                cout << "-1\n";
        }
        else if(command == "front")
        {
            if(!deque_num.empty())
                cout << deque_num.front() << "\n";
            else
                cout << "-1\n";
        }
        else if(command == "back")
        {
            if(!deque_num.empty())
                cout << deque_num.back() << "\n";
            else
                cout << "-1\n";
        }
        else if(command == "size")
        {
            cout << deque_num.size() << "\n";
        }
        else if(command == "empty")
        {
            if(deque_num.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
    }
}