
//找出矩阵的鞍点（即在行上最大，在列上最小）
//要求时间复杂度尽可能小，并使用c++的思想
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int max[n], min[m];
    for (int i = 0; i < n; i++)
    {
        max[i] = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > a[i][max[i]])
                max[i] = j;
        }
    }
    for (int i = 0; i < m; i++)
    {
        min[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] < a[min[i]][i])
                min[i] = j;
        }
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (min[max[i]] == i)
        {
            cout << i << " " << max[i] << " " << a[i][max[i]] << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "NO" << endl;
    return 0;
}
