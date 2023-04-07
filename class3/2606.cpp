#include <iostream>
#include <vector>

using namespace std;

typedef struct computer{
    vector<int> network;
} Computer;

Computer *computer;

int *problem;

void connect_computer(int a,int b)
{
    computer[a].network.push_back(b);
    computer[b].network.push_back(a);
}

void check_computer(int a)
{
    for(int i=0; i<computer[a].network.size();i++)
    {
        if(problem[computer[a].network[i]] == 0)
        {
            problem[computer[a].network[i]] = 1;
            check_computer(computer[a].network[i]);
        }
    }
}

int main()
{
    int n;

    cin >> n;
    
    computer = new Computer[n];
    problem = new int[n];

    for(int i=0;i<n;i++)
    {
        problem[i] = 0;
    }

    int m;

    cin >> m;

    for(int i=0;i<m;i++)
    {
        int a, b;

        cin >> a >> b;
        connect_computer(a-1 ,b-1);
    }

    check_computer(0);

    int cnt = 0 ;
    for(int i=1;i<n;i++)
    {
        if(problem[i] == 1)
            cnt++;
    }
    cout << cnt;
}