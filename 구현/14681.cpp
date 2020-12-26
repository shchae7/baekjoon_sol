/*
사분면 고르기
알고리즘 분류: 구현, 기하학
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if(x > 0 && y > 0)
    {
        cout << 1 << endl;
    }
    else if(x > 0 && y < 0)
    {
        cout << 4 << endl;
    }
    else if(x < 0 && y > 0)
    {
        cout << 2 << endl;
    }
    else // x < 0 && y < 0
    {
        cout << 3 << endl;
    }

    return 0;
}