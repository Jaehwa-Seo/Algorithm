#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int height[50], weight[50];

    int rank[50];

    for(int i=0;i<n;i++)
    {   
        cin >> height[i] >> weight[i];
        rank[i] = 1;
    }

    

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        {
            if(height[i] > height[j] && weight[i] > weight[j])
                rank[j]++;
            else if(height[i] < height[j] && weight[i] < weight[j])
                rank[i]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << rank[i] << " ";
    }
}