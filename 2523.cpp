#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i, j;
    for(i = 0; i < 2 * N - 1; i++)
    {
        if(i < N)
        {
            for(j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for(j = 0; j < 2 * N - i - 1; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}