/*
덩치
알고리즘 분류: 구현, 브루트포스 알고리즘
*/

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int bulk_rank(vector<pair<int, int> > &pairs, pair<int, int> pair)
{
    int rank(0);

    for(int i = 0; i < pairs.size(); i++)
    {
        if(pairs[i].first > pair.first && pairs[i].second > pair.second)
        {
            rank++;
        }
    }

    return rank + 1;
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int> > pairs;
    for(int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        pairs.push_back(make_pair(x, y));
    }

    for(int i = 0; i < N; i++)
    {
        cout << bulk_rank(pairs, pairs[i]) << " ";
    }
    cout << endl;

    return 0;
}