#include <iostream>
#include <string>

using namespace std;

int main()
{
    int index[26];

    fill_n(index,26,-1);
    
    string word;

    cin >> word;

    for(int i=0;i<word.length();i++)
    {
        if(index[word[i]-97] == -1)
        {
            index[word[i]-97] = i;
        }
    }

    for(int i=0;i<26;i++)
        cout << index[i] << " ";
}