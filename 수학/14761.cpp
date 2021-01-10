/*
FizzBuzz
알고리즘 분류: 수학
*/

#include <iostream>

using namespace std;

int main()
{
    int X, Y, N;
    cin >> X >> Y >> N;

    for(int i = 1; i < N + 1; i++)
    {
        if(i % X == 0)
        {
            cout << "Fizz";
        }
        if(i % Y == 0)
        {
            cout << "Buzz";
        }

        if(i % X != 0 && i % Y != 0)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}