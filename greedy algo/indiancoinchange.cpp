#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main()
{
    int n;
    cin >> n;

    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans + x / a[i];
        x = x - x / a[i] * a[i];
    }
}
