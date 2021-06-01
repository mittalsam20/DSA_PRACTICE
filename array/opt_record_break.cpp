#include <iostream>
#include <climits>
using namespace std;

bool max_till_func(int a[], int n, int present_day)
{
    int c = 0;
    for (int i = 0; i < present_day; i++)
    {
        if (a[present_day] < a[i])
            return false;
        else
            c++;
    }
    if (c == present_day)
        return true;
}

int main()
{
    int n;
    cout << " Number:- ";
    cin >> n;
    int a[n], present_day, ans = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (a[0] > a[1])
        ans++;

    for (int i = 0; i < n; i++)
    {
        if (max_till_func(a, n, i))
        {
            if (i = n - 1)
                ans++;
            else if (a[i] > a[i + 1])
                ans++;
        }
    }
    cout << ans << endl;
}