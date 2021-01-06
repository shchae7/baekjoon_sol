/*
문자열 반복
알고리즘 분류: 구현
*/

#include <iostream>
#include <string>

using namespace std;

string createP(string str, int r)
{
    string res = "";

    for(int i = 0; i < str.length(); i++)
    {
        for(int j = 0; j < r; j++)
        {
            res += str[i];
        }
    }

    return res;
}

int main()
{
    int test_num(0);
    cin >> test_num;

    int R;
    string S;
    for(int i = 0; i < test_num; i++)
    {
        cin >> R >> S;

        cout << createP(S, R) << endl;
    }

    return 0;
}