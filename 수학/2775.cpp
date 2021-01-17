/*
부녀회장이 될테야
알고리즘 분류: 수학, 조합론
*/

#include <iostream>

using namespace std;

int main()
{
    int test_num(0);
    cin >> test_num;

    int k, n;
    for(int i = 0; i < test_num; i++)
    {
        cin >> k >> n;

        int vals[k + 1][n];
        for(int j = 0; j < n; j++)
        {
            vals[0][j] = j + 1;
        }
        for(int j = 0; j < k + 1; j++)
        {
            vals[j][0] = 1;
        }

        for(int j = 1; j < k + 1; j++)
        {
            for(int l = 1; l < n; l++)
            {
                vals[j][l] = vals[j - 1][l] + vals[j][l - 1];
            }
        }

        cout << vals[k][n - 1] << endl;
    }

    return 0;
}