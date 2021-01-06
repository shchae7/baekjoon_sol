/*
크로아티아 알파벳
알고리즘 분류: 문자열
*/

#include <iostream>
#include <string>

using namespace std;

int croat_word_num(string str)
{
    int count(0);

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'c')
        {
            if(str[i + 1] == '=' || str[i + 1] == '-')
            {
                count++;
                i = i + 1;
            }
            else
            {
                count++;
            }
        }
        else if(str[i] == 'd')
        {
            if(str[i + 1] == '-')
            {
                count++;
                i = i + 1;
            }
            else if(str[i + 1] == 'z' && str[i + 2] == '=')
            {
                count++;
                i = i + 2;
            }
            else
            {
                count++;
            }
            
        }
        else if(str[i] == 'l')
        {
            if(str[i + 1] == 'j')
            {
                count++;
                i = i + 1;
            }
            else
            {
                count++;
            }
        }
        else if(str[i] == 'n')
        {
            if(str[i + 1] == 'j')
            {
                count++;
                i = i + 1;
            }
            else
            {
                count++;
            }
        }
        else if(str[i] == 's')
        {
            if(str[i + 1] == '=')
            {
                count++;
                i = i + 1;
            }
            else
            {
                count++;
            }
        }
        else if(str[i] == 'z')
        {
            if(str[i + 1] == '=')
            {
                count++;
                i = i + 1;
            }
            else
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string input;
    cin >> input;

    cout << croat_word_num(input) << endl;

    return 0;
}