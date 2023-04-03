#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string sentence;

    stack<char> stack_char;
    cin.ignore();

    for(int i=0;i<n;i++)
    {
        getline(cin, sentence);

        bool flag = true;

        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i] == '(')
                stack_char.push('(');
            else if(sentence[i] == ')')
            {
                if(!stack_char.empty())
                {
                    if(stack_char.top() != '(')
                    {
                        flag = false;
                        break;
                    }
                    stack_char.pop();
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if(!stack_char.empty())
            flag = false;
            
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";  

        while( !stack_char.empty() ) stack_char.pop();
    }
}