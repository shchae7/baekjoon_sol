#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int C;
    cin >> C;

    int i, j, N;
    for(i = 0; i < C; i++)
    {
        cin >> N;
        vector<int> scores(N);

        int sum (0);
        for(j = 0; j < N; j++)
        {
            cin >> scores[j];
            sum += scores[j];
        }

        int overAvg (0);
        for(j = 0; j < N; j++)
        {
            if(scores[j] > sum / N)
            {
                overAvg++;
            }
        }

        cout << setprecision(3) << fixed << ((double) overAvg / N) * 100 << "%\n";
    }

    return 0;
}