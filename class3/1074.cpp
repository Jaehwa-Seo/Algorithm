#include <iostream>
#include <cmath>

using namespace std;

int r,c;
int result = 0;

void divide(int x, int y, int n) {
    
    if(x == r && y == c) {
        cout << result;
        exit(0);
    }
    
    if(!(r <= x + n - 1 && c <= y + n - 1))
    {
        
        result += n * n;
        return;
    }
    
    divide(x, y, n / 2); 
    divide(x, y + n / 2, n / 2); 
    divide(x + n / 2, y, n / 2); 
    divide(x + n / 2, y + n / 2, n / 2); 
    
}

int main()
{
    int N;

    cin >> N >> r >> c;

    divide(0,0,pow(2,N));
}