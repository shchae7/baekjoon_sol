/*
더하기 사이클
알고리즘 분류: 수학, 구현
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int length (0), temp (0);
    int ori_num = num;
    while(1)
    {
        temp = ((num / 10 + num % 10) % 10) + (num % 10) * 10;

        if(temp == ori_num)
        {
            length++;
            break;
        }

        num = temp;
        length++;
    }


    cout << length << endl;

    return 0;
}