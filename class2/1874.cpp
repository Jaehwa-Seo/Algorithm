#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> stack;

    vector<string> answer;

    int number[100000];

    for(int i=0;i<n;i++)
    {
        cin >> number[i];
    }

    int cnt = 0;

    for(int i=1;i<=n;i++)
    {
        stack.push_back(i);
        answer.push_back("+");

        while(!stack.empty() && stack.back() == number[cnt])
        {
            stack.pop_back();
            answer.push_back("-");
            cnt++;
        }
    }

    if(!stack.empty()) 
        cout << "NO";
    else {
        for(int i=0;i<answer.size();i++)
        {
            cout << answer[i] << "\n";
        }
    }
}