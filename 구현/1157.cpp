/*
단어 공부
알고리즘 분류: 구현, 문자열
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

char most_used_alphabet(string str)
{
    vector<int> counts(26, 0);

    for(int i = 0; i < (int) str.length(); i++)
    {
        int chr_int = (int) str[i];
        if(97 <= chr_int && chr_int <= 122)
        {
            counts[chr_int - 97]++;
        }
        else if(65 <= chr_int && chr_int <= 90)
        {
            counts[chr_int - 65]++;
        }
    }

    int max_index = max_element(counts.begin(), counts.end()) - counts.begin();
    int max_count = *max_element(counts.begin(), counts.end());
    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(counts[i] == max_count)
        {
            count++;
        }
    }

    if(count != 1)
    {
        return '?';
    }
    else
    {
        return (char) (max_index + 65);
    }
}

int main()
{
    string input;
    cin >> input;

    cout << most_used_alphabet(input) << endl;

    return 0;
}