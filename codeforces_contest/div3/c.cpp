#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, a, b, k;
    cin >> t;
    while (t)
    {
        bool flag = 0;
        cin >> a >> b >> k;
        for (int i = 0; i < k; i++)
        {
            if (a == b)
            {
                cout << "Yes";
                flag = 1;
            }
            int div = __gcd(a, b);
            a = a / div;
            b = b / div;
            cout << a << " " << b << endl;
        }
        if (flag == 0)
            cout << "No";
        t--;
    }
}