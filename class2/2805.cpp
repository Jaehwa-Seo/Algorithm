#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, m;

    cin >> n >> m;
    
    vector<int> tree;


    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;

        tree.push_back(tmp);
    }

    sort(tree.begin(),tree.end());

    long long start, end, mid;

    start = 0;
    end = tree[n-1];


    long long sum = 0;
    long long length = -1;

    while(start <= end)
    {
        sum = 0;
        mid = (start+end)/2;

        for(int i=0;i<n;i++)
        {
            int tmp = tree[i] - mid;

            if(tmp > 0)
                sum += tmp;
        }

        if(sum >= m)
        {
            start = mid + 1;
            if(mid > length) length = mid; 
        }
        else
            end = mid - 1;

        // cout << "length : " << length << ", sum : " << sum << "\n";
    }

    cout << length ;
}