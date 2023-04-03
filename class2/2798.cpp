#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m;

    vector<int> card;

    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        int tmp;

        cin >> tmp;

        card.push_back(tmp);
    }

    int sum = 0;
    int result = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum = card[i] + card[j] + card[k];
                
                if(result < sum && sum <= m) result = sum;
            }
        }

    }

    cout << result;
}