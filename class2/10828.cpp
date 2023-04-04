#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack_num;

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

            stack_num.push(tmp);
        }
        else if(command == "pop")
        {
            if(!stack_num.empty())
            {
                cout << stack_num.top() << "\n";
                stack_num.pop();
            }
            else
                cout << "-1\n";
        }
        else if(command == "top")
        {
            if(!stack_num.empty())
                cout << stack_num.top() << "\n";
            else
                cout << "-1\n";
        }
        else if(command == "size")
        {
            cout << stack_num.size() << "\n";
        }
        else if(command == "empty")
        {
            if(stack_num.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
    }
}