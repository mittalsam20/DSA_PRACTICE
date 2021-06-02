#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], sum[n], sum_till = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_till += a[i];
        sum[i] = sum_till;
        cout << sum[i] << endl;
    }
}