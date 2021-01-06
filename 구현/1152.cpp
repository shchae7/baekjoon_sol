/*
단어의 개수
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <string>

using namespace std;

int num_words(string str)
{
    int count(0);

    int word_start(0);
    for(int i = 0; i < str.length(); i++)
    {
        int int_str = (int) str[i];
        if((65 <= int_str && int_str <= 90) || (97 <= int_str && int_str <= 122))
        {
            if(word_start == 0)
            {
                word_start = 1;
            }
        }
        else
        {
            if(word_start == 1)
            {
                word_start = 0;
                count++;
            }
        }
    }

    if(word_start == 1)
    {
        count++;
    }

    return count;
}

int main()
{
    string input;
    getline(cin, input);

    cout << num_words(input) << endl;

    return 0;
}