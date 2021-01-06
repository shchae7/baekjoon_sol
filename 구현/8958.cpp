/*
OX퀴즈
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <string>

using namespace std;

int quiz_score(string result)
{
    int cont_os(0), score(0);
    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] == 'O')
        {
            score += (1 + cont_os);
            cont_os += 1;
        }
        else
        {
            cont_os = 0;
        }
    }

    return score;
}

int main()
{
    int test_num(0);
    cin >> test_num;

    for(int i = 0; i < test_num; i++)
    {
        string input;
        cin >> input;

        cout << quiz_score(input) << endl;
    }

    return 0;
}