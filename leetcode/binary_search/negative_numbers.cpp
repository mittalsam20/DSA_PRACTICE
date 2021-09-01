#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n, ans = 0;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        int s = 0, l = n;
        for (int j = 0; j < m; j++)
        {
            int mid = (l + s) / 2;
            if (a[i][j] == a[i][mid] && a[i][j] < 0)
            {
                ans++;
            }
            else if (a[i][j] > a[i][mid])
                s = mid + 1;
            else
                l = mid - 1;
        }
    }
    cout << ans << endl;
}
