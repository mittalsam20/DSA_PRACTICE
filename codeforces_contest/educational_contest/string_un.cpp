#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int f(string a[], int i, int j, int ans)
{
    sort(a[i].begin(), a[i].end());
    sort(a[j].begin(), a[j].end());
    if (a[i].compare(a[j]))
    {
        cout << a[i] << "  " << a[j] << endl;
        ans += 1;
        return ans;
    }
    else
    {
        ans += 1337;
        return ans;
    }
}
int main()
{
    int n, ans = 0;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // cout << a[i] << "  " << a[j] << endl;
            if (!a[i].compare(a[j]))
            {
                ans += 0;
            }
            else
            {
                ans += f(a, i, j, ans);
            }
        }
    }
    cout << ans << endl;
}