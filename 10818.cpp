#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);

    int i;
    for(i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    cout << *min_element(nums.begin(), nums.end()) << " " << *max_element(nums.begin(), nums.end()) << endl;

    return 0;
}