#include <iostream>
using namespace std;
int main()
{
    int n, extra;
    cin >> n >> extra;
    int a[n], mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + extra) < mx)
            a[i] = 0;
        else
            a[i] = 1;
        cout << a[i] << " ";
    }
}