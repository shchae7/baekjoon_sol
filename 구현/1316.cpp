/*
그룹 단어 체커
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <string>
#include <set>

using namespace std;

int check_group_word(string str)
{
    char cur_char;
    set<char> passed_char;
    for(int i = 0; i < str.length(); i++)
    {
        if(passed_char.find(str[i]) == passed_char.end())
        {
            passed_char.insert(str[i]);
            cur_char = str[i];
        }
        else
        {
            if(str[i] == cur_char)
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int N;
    cin >> N;

    int count(0);
    string input;
    for(int i = 0; i < N; i++)
    {
        cin >> input;

        count += check_group_word(input);
    }

    cout << count << endl;

    return 0;
}