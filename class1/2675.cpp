#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i=0;i<t;i++)
    {
        int R;

        cin >> R;

        char s[20];

        scanf("%s",s);

        int cnt = 0;
        while(s[cnt] != 0)
        {
            for(int j=0;j<R;j++)
                printf("%c",s[cnt]);
           
            cnt++;
        }

         printf("\n");
    }
}