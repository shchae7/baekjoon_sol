/*
알파벳 개수
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <string>

using namespace std;

void count_alphabet(int *counts, char chr)
{
    counts[((int) chr) - 97]++;
}

int main()
{
    string input;
    cin >> input;

    int counts[26] = {};
    for(int i = 0; i < input.length(); i++)
    {
        count_alphabet(counts, input[i]);
    }

    for(int i = 0; i < 26; i++)
    {
        cout << counts[i] << " ";
    }
    cout << endl;

    return 0;
}