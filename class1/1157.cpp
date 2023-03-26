#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count[26] = {0,};

    string word;

    cin >> word;

    for(int i=0;i<word.length();i++)
    {
        if(word[i] >= 97 && word[i] <= 122)
        {
            count[word[i]-97] ++;
        }
        else if(word[i] >= 65 && word[i] <= 90)
        {
            count[word[i]-65] ++;
        }
    }

    bool one_max = true;
    int max_word = -1;
    for(int i=0;i<26;i++)
    {
        if(max_word != -1 && count[max_word] == count[i])
            one_max = false;
        else if(count[max_word] < count[i] || max_word == -1)
        {
            max_word = i;
            one_max = true;
        }
    }

    if(!one_max)
        cout << "?";
    else
        printf("%c",max_word+65);
}