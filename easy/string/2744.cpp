#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a[100];

    scanf("%s",a);
    
    int cnt = 0;

    while(a[cnt] != 0)
    {
        if(islower(a[cnt]))
            printf("%c",toupper(a[cnt]));
        else
            printf("%c",tolower(a[cnt]));
        
        cnt++;
    }

    return 0;
}