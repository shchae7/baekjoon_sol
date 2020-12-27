/*
Shift Letters
알고리즘 분류: 문자열
*/

#include <iostream>
#include <string>

using namespace std;

string shift_word(string str, int n)
{
    string shifted_word = "";

    for(int i = 0; i < str.length(); i++)
    {
        shifted_word = shifted_word + str[(str.length() - n + i) % str.length()];
    }

    return shifted_word;
}

int main()
{
    int test_num(0);
    cin >> test_num;

    for(int i = 0; i < test_num; i++)
    {
        string input;
        int n;
        cin >> input >> n;

        cout << "Shifting " << input << " by " << n << " positions gives us: " << shift_word(input, n) << endl;
    }

    return 0;
}