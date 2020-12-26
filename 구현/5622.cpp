/*
다이얼
알고리즘 분류: 구현
*/

#include <iostream>
#include <string>

using namespace std;

int dial_time(char dial)
{
    int time(0);

    if(dial == 'A' || dial == 'B' || dial == 'C')
    {
        time = 3;
    }
    else if(dial == 'D' || dial == 'E' || dial == 'F')
    {
        time = 4;
    }
    else if(dial == 'G' || dial == 'H' || dial == 'I')
    {
        time = 5;
    }
    else if(dial == 'J' || dial == 'K' || dial == 'L')
    {
        time = 6;
    }
    else if(dial == 'M' || dial == 'N' || dial == 'O')
    {
        time = 7;
    }
    else if(dial == 'P' || dial == 'Q' || dial == 'R' || dial == 'S')
    {
        time = 8;
    }
    else if(dial == 'T' || dial == 'U' || dial == 'V')
    {
        time = 9;
    }
    else if(dial == 'W' || dial == 'X' || dial == 'Y' || dial == 'Z')
    {
        time = 10;
    }
    else
    {
        time = 11;
    }

    return time;
}

int main()
{
    string input;
    cin >> input;

    int total_dial_time(0);
    for(int i = 0; i < input.length(); i++)
    {
        total_dial_time += dial_time(input[i]);
    }
    cout << total_dial_time << endl;

    return 0;
}