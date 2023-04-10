#include <iostream>

using namespace std;

int main()
{
    string formula;

    cin >> formula;

    int result = 0;

    string number;

    bool is_delete = false;
    bool is_first = true;

    for(int i=0;i<formula.length();i++)
    {    
        if(formula[i] >= '0' && formula[i] <= '9')
            number.push_back(formula[i]);
        
        else if(formula[i] == '-' || formula[i] == '+')
        {
            if(is_first)
            {
                result += stoi(number);
                is_first = false;
            }
            else
            {
                if(is_delete)
                {
                    result -= stoi(number);
                }
                else
                {
                    result += stoi(number);
                }
            }
            
            number = "";
        }
        
        if(formula[i] == '-')
            is_delete = true;

        if(i == (formula.length() - 1))
            if(is_delete)
                result -= stoi(number);
            else
                result += stoi(number);
    }

    cout << result;
}