#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m], mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        mx = max(sum, mx);
    }
    cout << mx << endl;
}