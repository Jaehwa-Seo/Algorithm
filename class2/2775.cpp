#include <iostream>

using namespace std;
// 0층 1  2  3  4  5  6  7  8   9   10
// 1층 1  3  6  10 15 21 28 36  45  55
// 2층 1  4  10 20 35 56 84 120 165 220
// 3층  

int calculate_people(int floor, int room)
{
    if(floor == 0)
        return room;
    else if(room == 1)
        return 1;
    else
        return calculate_people(floor-1,room) + calculate_people(floor,room-1);       
}

int main()
{
    int floor, room;

    int t;

    cin >> t;

    for(int i=0;i<t;i++)
    {
        cin >> floor >> room;
        cout << calculate_people(floor,room) << "\n";
    }
}