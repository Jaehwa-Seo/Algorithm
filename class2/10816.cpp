#include <iostream>
#include <algorithm>

using namespace std;

int lower_binary(int arr[],int target,int size)
{
    int mid, start, end;
    start = 0, end = size -1;

    while(end > start)
    {
        mid = (start+end)/2;
        if(arr[mid] >= target)
            end = mid;
        else start = mid +1;
    }

    return end;
}

int upper_binary(int arr[],int target,int size)
{
    int mid, start, end;
    start = 0, end = size -1;

    while(end > start)
    {
        mid = (start+end)/2;
        if(arr[mid] > target)
            end = mid;
        else start = mid +1;
    }

    return end;
}

int main()
{
    int n;

    cin >> n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int m;

    cin >> m;

    int *input = new int[m];
    int *result = new int[m];

    for(int i=0;i<m;i++)
    {
        cin >> input[i];

        result[i] = 0;
    }

    for(int i=0;i<m;i++)
    {
        int lower = lower_binary(arr,input[i],n);
        int upper = upper_binary(arr,input[i],n);

        if(upper == n-1 && arr[n-1] == input[i])
            upper++;

        result[i] = upper-lower;
    }

    for(int i=0;i<m;i++)
    {
        cout << result[i] << " ";
    }
}