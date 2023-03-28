#include <iostream>
#include <algorithm>

using namespace std;

int compare_word(string a, string b)
{
    if(a.length() == b.length())
        return a<b;
    else
        return a.length() < b.length();
}

int main()
{
    int n;

    cin >> n;

    string word[20000];

    for(int i=0;i<n;i++)
        cin >> word[i];

    sort(word,word+n,compare_word);

    for(int i=0;i<n;i++)
    {
        if(word[i] == word[i-1])
            continue;
        cout << word[i] << endl;
    }
}