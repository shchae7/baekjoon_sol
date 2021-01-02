/*
농구 경기
알고리즘 분류: 문자열
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    map<char, int> count;
    for(int i = 0; i < N; i++)
    {
        string input;
        cin >> input;

        if(count.find(input[0]) == count.end())
        {
            count.insert(pair<char, int>(input[0], 1));
        }
        else
        {
            count[input[0]]++;
        }
        
    }

    map<char, int>::iterator itr;
    int not_possible(1);
    for(itr = count.begin(); itr != count.end(); itr++)
    {
        if(itr->second >= 5)
        {
            not_possible = 0;
            cout << itr->first;
        }
    }

    if(not_possible == 1)
    {
        cout << "PREDAJA" << endl;
    }
    else
    {
        cout << endl;
    }

    return 0;
}