#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    int t;
    
    cin >> t;

    vector<int> queue;
    vector<int> sequence;

    vector<int> answer;

    for(int k=0;k<t;k++)
    {
        int n, m;

        cin >> n >> m;

        for(int i=0;i<n;i++)
        {
            int tmp;
            cin >> tmp;

            queue.push_back(tmp);
            sequence.push_back(i);
        }
        
        int max = *max_element(queue.begin(),queue.end());

        while(!queue.empty())
        {  

            int tmp = queue.front();
            int tmp_sequence = sequence.front();

            queue.erase(queue.begin());
            sequence.erase(sequence.begin());

            if(tmp == max)
            {
                answer.push_back(tmp_sequence);
                max = *max_element(queue.begin(),queue.end());
            }
            else
            {
                queue.push_back(tmp);
                sequence.push_back(tmp_sequence);
            }
        }

        cout << find(answer.begin(), answer.end(), m) - answer.begin() + 1 << "\n";

        vector<int>().swap(answer);
        vector<int>().swap(queue);
        vector<int>().swap(sequence);
    }
}