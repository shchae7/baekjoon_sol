/*
음계
알고리즘 분류: 구현
*/

#include <iostream>

using namespace std;

int main()
{
    int input, prev_input(-1), flag(-1);
    for(int i = 0; i < 8; i++)
    {
        cin >> input;
        if(prev_input == -1)
        {
            prev_input = input;
            continue;
        }

        if(prev_input < input)
        {
            if(flag == -1)
            {
                flag = 0;
            }

            if(flag == 1)
            {
                flag = 2;
            }
        }
        else // prev_input > input
        {
            if(flag == -1)
            {
                flag = 1;
            }

            if(flag == 0)
            {
                flag = 2;
            }
        }
        
        prev_input = input;
    }

    if(flag == 0)
    {
        cout << "ascending" << endl;
    }
    else if(flag == 1)
    {
        cout << "descending" << endl;
    }
    else
    {
        cout << "mixed" << endl;
    }
    

    return 0;
}