/*
수 정렬하기
알고리즘 분류: 구현, 정렬
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int input;
    vector<int> inputs;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        inputs.push_back(input);
    }

    sort(inputs.begin(), inputs.end());

    for(int i = 0; i < N; i++)
    {
        cout << inputs[i] << endl;
    }

    return 0;
}