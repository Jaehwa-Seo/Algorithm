#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string sentence;

    stack<char> stack_char;

    while(true)
    {
        getline(cin, sentence);

        if(sentence == ".")
            break;

        bool flag = true;

        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i] == '(')
                stack_char.push('(');
            else if(sentence[i] == '[')
                stack_char.push('[');
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
            else if(sentence[i] == ']')
            {
                if(!stack_char.empty())
                {
                    if(stack_char.top() != '[')
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

        if(sentence[sentence.length() - 1] != '.' || !stack_char.empty())
            flag = false;
            
        if(flag)
            cout << "yes\n";
        else
            cout << "no\n";  

        while( !stack_char.empty() ) stack_char.pop();
    }
}