#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int N;
    int i, j;
    for(i = 0; i < T; i++)
    {
        cin >> N;
        int sum (0), c;
        double gSum(0.0), g;

        for(j = 0; j < N; j++)
        {
            cin >> c >> g;

            sum += c;
            gSum += g * c;
        }

        cout << sum << " " << setprecision(1) << fixed << gSum / sum << endl;
    }

    return 0;
}