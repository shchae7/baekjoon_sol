/*
Banana
알고리즘 분류: 문자열
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void make_dictionary(vector<string> &strings, map<string, string> &dict)
{
    for(int i = 0; i < strings.size() - 1; i = i + 2)
    {
        dict.insert(pair<string, string>(strings[i], strings[i + 1]));
    }
}

int main()
{
    int N;
    cin >> N;

    vector<string> strings;
    for(int i = 0; i < N * 3; i++)
    {
        string input;
        cin >> input;

        if(i % 3 == 1)
        {
            continue;
        }

        strings.push_back(input);
    }

    map<string, string> dictionary;
    make_dictionary(strings, dictionary);

    int T, K;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        string res = "";
        cin >> K;
        for(int j = 0; j < K; j++)
        {
            string input;
            cin >> input;

            res = res + dictionary[input] + " ";
        }

        cout << res << endl;
    }

    return 0;
}