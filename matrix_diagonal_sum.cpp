#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n % 2 && i == j && i == (n - 1) / 2)
            {
                ans += a[i][j];
                continue;
            }
            else if (i == j)
                ans += a[i][j];
            else if (i + j == n - 1)
                ans += a[i][j];
        }
    }
    cout << ans << endl;
}
