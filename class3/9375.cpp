#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct Clothes{
    vector<string> name;
};

int main()
{
    int T;

    cin >> T;

    for(int k=0;k<T;k++)
    {

        map<string,Clothes> clothes_map;

        int n;
        
        cin >> n;

        for(int i=0;i<n;i++)
        {
            string name, type;

            cin >> name >> type;

            if(clothes_map.find(type) == clothes_map.end())
            {
                Clothes a;
                clothes_map[type] = a;
            }
                
            clothes_map[type].name.push_back(name);
        }   
        int result = 1;

        for(auto item =clothes_map.begin(); item!=clothes_map.end(); item++ )
        {
            result *= (item->second.name.size()+1);
        }

        cout << result-1 << "\n";
    }

}