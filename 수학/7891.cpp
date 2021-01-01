/*
Can you add this?
알고리즘 분류: 수학, 사칙연산
*/

#include <iostream>

using namespace std;

int main()
{
    int test_case(0);
    cin >> test_case;

    int x, y;
    for(int i = 0; i < test_case; i++)
    {
        cin >> x >> y;
        cout << x + y << endl;
    }

    return 0;
}