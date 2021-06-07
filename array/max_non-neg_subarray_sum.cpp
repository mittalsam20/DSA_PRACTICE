
#include <iostream>
#include <climits>
using namespace std;
int sub_array_sum(int a[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] < 0)
                break;
            sum += a[j];
            mx = max(mx, sum);
        }
    }
    cout << mx;
    return mx;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sub_array_sum(a, n);
}