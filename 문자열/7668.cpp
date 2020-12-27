/*
Divisibility
알고리즘 분류: 문자열
*/

#include <iostream>
#include <string>

using namespace std;

int convert_to_base_10(string str)
{
    int num(0);

    for(int i = 0; i < str.length(); i++)
    {
        int chr_int = (int) str[i];
        if(48 <= chr_int && chr_int <= 57)
        {
            num += (chr_int - 48);
        }
        else if(65 <= chr_int && chr_int <= 90)
        {
            num += (chr_int - 65 + 10);
        }
        else if(97 <= chr_int && chr_int <= 122)
        {
            num += (chr_int - 97 + 10 + 26);
        }
    }

    return num;
}

int main()
{
    while(true)
    {
        string input;
        cin >> input;

        if(input == "end")
        {
            break;
        }

        if(convert_to_base_10(input) % 61 == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}