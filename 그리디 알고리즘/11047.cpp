/*
동전 0
알고리즘 분류: 그리디 알고리즘
*/

#include <iostream>
#include <vector>

using namespace std;

int best_fit_val(vector<int> &values, int num)
{
    for(int i = values.size() - 1; i > -1; i--)
    {
        if(values[i] <= num)
        {
            return values[i];
        }
    }
}

int main()
{
    int N, K;
    cin >> N >> K;

    int value;
    vector<int> values;
    for(int i = 0; i < N; i++)
    {
        cin >> value;
        values.push_back(value);
    }

    int count(0);
    do
    {
        K -= best_fit_val(values, K);
        count++;
    } while (K > 0);
    

    cout << count << endl;

    return 0;
}