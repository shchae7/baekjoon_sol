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