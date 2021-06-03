#include <iostream>
using namespace std;
int func(int a[], int i, int n, int sum)
{
    if (n == i)
        return sum;
    for (int j = i; j < n; j++)
    {
        if ((n - i) % 2 != 0)
        {
            sum += a[j];
            cout << a[j];
        }
    }
    func(a, i, n - 1, sum);
}
int main()
{
    int n;
    cin >> n;
    int a[n], sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        ans += func(a, i, n, sum);
        cout << endl;
    }
    cout << ans << endl;
}
