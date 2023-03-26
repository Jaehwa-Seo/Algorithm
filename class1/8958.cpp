#include <iostream>

using namespace std;

void score_calculate(char test_result[], int index, int sum, int answer)
{
    if(test_result[index] != 0)
    {
        
        if(test_result[index] == 'X')
        {
            sum += answer;
            answer = 0;
        }
        else
        {
            sum += answer;
            answer++;
        }

        index++;

        score_calculate(test_result,index,sum,answer);
    }
    else
    {
        sum+= answer;
        cout << sum << "\n";
    }
}

int main()
{
    char test_result[80];

    int t;

    cin >> t;


    for(int i=0;i<t;i++)
    {
        cin >> test_result;

        score_calculate(test_result,0,0,0);
    }

}