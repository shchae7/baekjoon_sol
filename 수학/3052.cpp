/*
나머지
알고리즘 분류: 수학, 사칙연산
*/

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> nums;
    set<int> remainders;

    for(int i = 0; i < 10; i++)
    {
        int input;
        cin >> input;

        nums.push_back(input);
    }

    for(int i = 0; i < 10; i++)
    {
        remainders.insert(nums[i] % 42);
    }

    cout << remainders.size() << endl;

    return 0;
}