#include <iostream>
#include <string>

using namespace std;

int main()
{
    string comment;

    getline(cin,comment);

    int count = 1;

    for(int i=0;i<comment.length();i++)
    {
        if(comment[i] == ' ')
            count++;
    }

    if(comment[0] == ' ')
        count--;
    
    if(comment[comment.length()-1] == ' ')
        count--;

    cout << count;
}