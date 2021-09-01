#include <iostream>
using namespace std;
int main()
{
    int n, start;
    cin >> n;
    cin >> start;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = start + 2 * i;
    if (n == 1)
        cout << start << endl;
    else
    {
        int prev = a[0] ^ a[1];
        for (int i = 2; i < n; i++)
            prev = prev ^ a[i];
        cout << prev << endl;
    }
}