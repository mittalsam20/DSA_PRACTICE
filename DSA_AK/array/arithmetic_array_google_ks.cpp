#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s = 2, curr = 2, pd = a[1] - a[0], res = 2;
    while (s < n)
    {
        if (pd == a[s] - a[s - 1])
            curr++;
        else
        {
            pd = a[s] - a[s - 1];
            curr = 2;
        }
        res = max(res, curr);
        s++;
    }
    cout << res << endl;
}