/*
이항 계수 1
알고리즘 분류: 수학, 조합론
*/

#include <iostream>

using namespace std;

int factorial(int n)
{
    int result(1);

    for(int i = 1; i < n + 1; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int N, K;
    cin >> N >> K;

    cout << (float) factorial(N) / (factorial(K) * factorial(N - K)) << endl;

    return 0;
}