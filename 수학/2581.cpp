/*
소수
알고리즘 분류: 수학, 정수론, 소수 판정
*/

#include <iostream>

using namespace std;

int isPrime(int num)
{
    if(num == 1)
    {
        return 0;
    }

    if(num == 2 || num == 3 || num == 5 || num == 7)
    {
        return 1;
    }

    for(int i = 2; i < num / 2 + 1; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int M, N;
    cin >> M >> N;

    int sum(0), min_prime(M), flag(0);
    for(int i = M; i < N + 1; i++)
    {
        if(isPrime(i) == 1)
        {
            sum += i;
            
            if(flag == 0)
            {
                min_prime = i;
                flag = 1;
            }
        }
    }

    if(flag == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum << endl << min_prime << endl;
    }

    return 0;
}