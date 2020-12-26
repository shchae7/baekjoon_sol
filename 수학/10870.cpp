/*
피보나치 수 5
알고리즘 분류: 수학, 다이나믹 프로그래밍
*/

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}