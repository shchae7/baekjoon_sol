/*
홀수
알고리즘 분류: 수학, 구현
*/

#include <iostream>

using namespace std;

int main()
{
    int odds_exist(0), sum(0), min_odd(100);
    for(int i = 0; i < 7; i++)
    {
        int input;
        cin >> input;

        if(input % 2 == 1)
        {
            odds_exist = 1;
            sum += input;

            if(min_odd > input)
            {
                min_odd = input;
            }
        }
    }

    if(odds_exist == 1)
    {
        cout << sum << endl << min_odd << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}