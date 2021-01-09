/*
KMP는 왜 KMP일까?
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <string>

using namespace std;

string long_to_short(string str)
{
    string short_form = "";

    short_form += str[0];
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '-')
        {
            short_form += str[i + 1];
        }
    }

    return short_form;
}

int main()
{
    string input;
    cin >> input;

    cout << long_to_short(input) << endl;

    return 0;
}