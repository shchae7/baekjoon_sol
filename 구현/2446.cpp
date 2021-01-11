/*
별 찍기 - 9
알고리즘 분류: 구현
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < 2 * N - 1; i++)
    {
        for(int j = 0; j < 2 * N - 1; j++)
        {
            if(i < N)
            {
                if(j < i)
                {
                    cout << " ";
                }
                else if(i <= j && j < 2 * N - i -1)
                {
                    cout << "*";
                }
            }
            else
            {
                if(j < 2 * N - 2 - i)
                {
                    cout << " ";
                }
                else if(2 * N - 2 - i <= j && j < i + 1)
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }

    return 0;
}