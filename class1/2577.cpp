#include <iostream>
#include <string>

using namespace std;

void number_count(int count[], int num)
{
    int n = num % 10;

    count[n]++;

    num /= 10;

    if(num < 10)
        count[num]++;
    else
        number_count(count,num);
}

int main()
{
    int count[10] = {0,};

    int a,b,c;

    cin >> a >> b >> c;

    int result = a*b*c;

    number_count(count,result);

    for(int i=0;i<10;i++)
        cout << count[i] << endl;
}