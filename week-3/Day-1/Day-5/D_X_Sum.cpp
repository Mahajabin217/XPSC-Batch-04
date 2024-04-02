#include <bits/stdc++.h>
using namespace std;
int cell(int mat[200][200], int row, int col)
{
    int mx_sum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int level = -mat[i][j];
            for (int k = 0; k < row; k++)
            {
                int dis = abs(i - k);
                if (j >= dis) // left side diagonal
                    level += mat[k][j - dis];
                if (j + dis < col) // right side diagonal
                    level += mat[k][j + dis];
            }
            mx_sum = max(mx_sum, level);
        }
    }
    return mx_sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        int mat[200][200];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
        cout << cell(mat, row, col) << endl;
    }
    return 0;
}