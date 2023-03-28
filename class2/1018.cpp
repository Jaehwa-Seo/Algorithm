#include <iostream>

using namespace std;

char board[50][50];

int calculate_board(int x, int y);
int check_line(int x,int y,bool start_w);

int main()
{
    
    int n,m;

    cin >> n >> m;
    
    for(int i=0;i<n;i++)
        cin >> board[i];
    
    int min = 2501;

    int result = 0;
    
    for(int i=0;i<n-7;i++)
        for(int j=0;j<m-7;j++)
        {
            result = calculate_board(i,j);
            if(min > result)
            {
                min = result;
            }
        } 

    cout << min;
}

int calculate_board(int x, int y)
{
    int sum_w = 0;
    int sum_b = 0;
    for(int i=0;i<8;i++)
    {
        if(i % 2 ==0)
        {

            sum_w += check_line(x+i,y,true);
            sum_b += check_line(x+i,y,false);
        }
        else
        {
            sum_w += check_line(x+i,y,false);
            sum_b += check_line(x+i,y,true);
        }
            
        
    }

    return sum_w >= sum_b ? sum_b : sum_w;
}

int check_line(int x,int y,bool start_w)
{
    char word;

    int wrong_count = 0;

    if(start_w)
        word = 'W';
    else
        word = 'B';

    for(int i=0;i<8;i++)
    {
        if(board[x][y+i] != word)
            wrong_count++;
        
        if(word =='W')
            word = 'B';
        else
            word = 'W';
    }
    return wrong_count;
}
