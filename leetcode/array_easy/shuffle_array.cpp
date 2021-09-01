#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[2 * n], j = n;
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        while (j < 2 * n)
        {
            cout << a[j] << " ";
            j++;
            break;
        }
    }
}