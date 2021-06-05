#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], ans = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
}