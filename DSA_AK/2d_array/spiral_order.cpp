#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int er = n - 1, ec = m - 1, sr = 0, sc = 0;
    while (sr <= er && sc <= ec)
    {
        for (int i = sc; i < ec; i++)
            cout << a[sr][i] << " ";

        for (int i = sr; i < er; i++)
            cout << a[i][ec] << " ";

        for (int i = ec; i > sc; i--)
            cout << a[er][i] << " ";

        for (int i = er; i > sr; i--)
            cout << a[i][sc] << " ";

        sr++;
        er--;
        sc++;
        ec--;
    }
}