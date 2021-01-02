/*
ROT13
알고리즘 분류: 문자열
*/

#include <iostream>
#include <string>

using namespace std;

string rot13(string str)
{
    string mod_str = str;

    for(int i = 0; i < str.length(); i++)
    {
        int int_str = (int) str[i];
        if(97 <= int_str && int_str <= 122)
        {
            if(int_str + 13 > 122)
            {
                int_str = 97 + (int_str + 13) - 122 - 1;
            }
            else
            {
                int_str += 13;
            }
        }
        else if(65 <= int_str && int_str <= 90)
        {
            if(int_str + 13 > 90)
            {
                int_str = 65 + (int_str + 13) - 90 - 1;
            }
            else
            {
                int_str += 13;
            }
        }

        mod_str[i] = (char) int_str;
    }

    return mod_str;
}

int main()
{
    string input;
    getline(cin, input);

    cout << rot13(input) << endl;

    return 0;
}