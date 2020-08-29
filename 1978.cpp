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

    int i;
    for(i = 2; i < num / 2 + 1; i++)
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
    int N;
    cin >> N;

    int i, num, numPrimes(0);
    for(i = 0; i < N; i++)
    {
        cin >> num;
        numPrimes += isPrime(num);
    }

    cout << numPrimes << endl;

    return 0;
}