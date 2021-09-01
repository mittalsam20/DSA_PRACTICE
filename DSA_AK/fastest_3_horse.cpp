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
    int five[5], c = 0;
    for (int i = 0; i < n; i++)
    {
        if (c <= 5)
        {
            five[i] = a[i];
            c++;
        }
        }
}