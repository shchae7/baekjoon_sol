/*
한수
알고리즘 분류: 브루트포스 알고리즘
*/

#include <iostream>

using namespace std;

int check(int i)
{
    int n1 = i % 10;
    int n2 = (i % 100) / 10;
    int n3 = (i % 1000) / 100;
    int n4 = i / 1000;

    if(n4 == 1)
    {
        return 0;
    }
    else if(n3 != 0)
    {
        if(n2 - n1 == n3 - n2)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int X;
    cin >> X;

    int num(0);
    for(int i = 1; i < X + 1; i++)
    {
        num += check(i);
    }
    cout << num << endl;

    return 0;
}