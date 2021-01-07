/*
직각삼각형
알고리즘 분류: 수학, 기하학
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    while(true)
    {
        cin >> num1 >> num2 >> num3;
        if(num1 + num2 + num3 == 0)
        {
            break;
        }

        int z = max(max(num1, num2), num3);
        if(num1 * num1 + num2 * num2 + num3 * num3 - z * z == z * z)
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }

    return 0;
}