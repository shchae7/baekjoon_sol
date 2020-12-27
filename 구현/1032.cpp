/*
명령 프롬프트
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string find_command(vector<string> &strings)
{
    string command = "?";
    command.resize(strings[0].length());

    for(int i = 0; i < strings[0].length(); i++)
    {
        char chr = strings[0][i];
        int flag = 0;
        for(int j = 0; j < strings.size(); j++)
        {
            if(chr != strings[j][i])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            command[i] = '?';
        }
        else
        {
            command[i] = chr;
        }
    }

    return command;
}

int main()
{
    int N;
    cin >> N;

    vector<string> strings;
    for(int i = 0; i < N; i++)
    {
        string input;
        cin >> input;

        strings.push_back(input);
    }

    cout << find_command(strings) << endl;

    return 0;
}