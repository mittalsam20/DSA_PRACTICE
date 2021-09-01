#include <iostream>
#include <algorithm>
using namespace std;

int sec_large(int a[])
{
    int i, first, second;
    sort(a, a + 4);
    for (i = 2; i >= 0; i--)
        if (a[i] != a[3])
            return a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int a[4];
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        int first = max(a[0], a[1]);
        int sec = max(a[2], a[3]);
        int check = sec_large(a);
        if (check == first || check == sec)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
}