/*
직사각형에서 탈출
알고리즘 분류: 수학, 기하학
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int x_min_dist = min(x, w - x);
    int y_min_dist = min(y, h - y);
    cout << min(x_min_dist, y_min_dist) << endl;

    return 0;
}