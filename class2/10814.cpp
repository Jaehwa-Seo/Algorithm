#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
    int age;
    string name;
};

bool compare(const person& now, const person& last)
{
    if(now.age != last.age) return now.age < last.age;
    return false;
}

int main()
{	
    int N;
    cin >> N;
    person people[100001];

    for (int i = 0; i < N; i++)
        cin >> people[i].age >> people[i].name;
  
    stable_sort(people, people + N, compare);

    for (int i = 0; i < N; i++)
        cout << people[i].age << " " << people[i].name << "\n";
}