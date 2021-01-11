/*
1, 2, 3 더하기
알고리즘 분류: 다이나믹 프로그래밍
*/

#include <iostream>

using namespace std;

int num_cases(int num)
{
    int values[num];
    values[0] = 1;
    values[1] = 2;
    values[2] = 4;

    for(int i = 3; i < num; i++)
    {
        values[i] = values[i - 1] + values[i - 2] + values[i - 3];
    }

    return values[num - 1];
}

int main()
{
    int T;
    cin >> T;

    int input;
    for(int i = 0; i < T; i++)
    {
        cin >> input;

        cout << num_cases(input) << endl;
    }

    return 0;
}