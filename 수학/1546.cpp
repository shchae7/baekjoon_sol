/*
평균
알고리즘 분류: 수학, 사칙연산
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> scores(N);

    int i, maxScore(0);
    for(i = 0; i < N; i++)
    {
        cin >> scores[i];

        if(maxScore < scores[i])
        {
            maxScore = scores[i];
        }
    }

    double sum(0.0);
    for(i = 0; i < N; i++)
    {
        sum += (double) scores[i] / maxScore * 100;
    }

    cout << sum / N << endl;

    return 0;
}