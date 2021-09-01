#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n, ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[n];
        sort(a, a + n);
        do
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((1 <= i) && (i < j) && (j <= n))
                        if (__gcd(a[i], 2 * a[j]) > 1)
                            ans++;
                }
            }
        } while (next_permutation(a, a + n));
        cout << ans << endl;
        t--;
    }
    return 0;
}
