/*
나는 요리사다
알고리즘 분류: 수학, 구현, 사칙연산
*/

#include <iostream>

using namespace std;

int main()
{
    int scores[5] = {0};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            int input;
            cin >> input;

            scores[i] += input;
        }
    }

    int max_score(0), max_index(0);
    for(int i = 0; i < 5; i++)
    {
        if(scores[i] > max_score)
        {
            max_score = scores[i];
            max_index = i;
        }
    }

    cout << max_index + 1 << " " << max_score << endl;

    return 0;
}