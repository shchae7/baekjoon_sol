/*
ATM
알고리즘 분류: 그리디 알고리즘, 정렬
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(int i, int j)
{
    return i < j;
}

int get_shorted_time(vector<int> &times_needed)
{
    int time(0);
    for(int i = 0; i < times_needed.size(); i++)
    {
        for(int j = 0; j <= i; j++)
        {
            time += times_needed[j];
        }
    }

    return time;
}

int main()
{
    int N;
    cin >> N;

    int input;
    vector<int> times_needed;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        times_needed.push_back(input);
    }

    sort(times_needed.begin(), times_needed.end(), comparator);

    cout << get_shorted_time(times_needed) << endl;

    return 0;
}