#include <iostream>
#include <string>
#include <map>

using namespace std;


int main()
{
    map<string,string> score_result;

    score_result.insert({"A+","4.3"});
    score_result.insert({"A0","4.0"});
    score_result.insert({"A-","3.7"});
    score_result.insert({"B+","3.3"});
    score_result.insert({"B0","3.0"});
    score_result.insert({"B-","2.7"});
    score_result.insert({"C+","2.3"});
    score_result.insert({"C0","2.0"});
    score_result.insert({"C-","1.7"});
    score_result.insert({"D+","1.3"});
    score_result.insert({"D0","1.0"});
    score_result.insert({"D-","0.7"});
    score_result.insert({"F","0.0"});

    string score;

    cin >> score;

    cout << score_result[score];
}