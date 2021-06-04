#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, ans = 0, qt;
    cin >> n;
    cin >> qt;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        if (qt <= b[i])
            ans++;
    cout << ans << endl;
}
