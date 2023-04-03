#include <iostream>

using namespace std;

int main()
{
    int t;
    
    cin >> t;

    for(int i=0;i<t;i++)
    {
        int h,w,n;

        cin >> h >> w >> n;

        int floor, room;

        room = (n / h);
        floor = n % h;
        
        if(floor == 0)
            floor = h;
        
        printf("%d%02d\n",floor,room+1);
    }

    
}