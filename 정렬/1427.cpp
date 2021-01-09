/*
소트인사이드
알고리즘 분류: 정렬
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string number;
    cin >> number;

    vector<int> nums;
    for(int i = 0; i < number.length(); i++)
    {
        nums.push_back((int) number[i] - 48);
    }
    sort(nums.begin(), nums.end());

    for(int i = number.length() - 1; i > -1; i--)
    {
        cout << nums[i];
    }
    cout << endl;

    return 0;
}