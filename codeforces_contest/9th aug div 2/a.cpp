#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int sum = 0, n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        // cout << sum << endl;
        double maxi = *max_element(a.begin(), a.end());
        // cout << maxi << endl;
        double ans = (((sum - maxi) / (n - 1)) + maxi);
        cout << fixed << setprecision(9) << ans << endl;
    }
    return 0;
}