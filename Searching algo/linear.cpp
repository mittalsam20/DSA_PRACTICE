#include <iostream>
using namespace std;

void linear(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == key)
        {
            cout << "KEY FOUND AT " << i + 1 << " Position" << endl;
            return;
        }
    }
    cout << "KEY is not present";
}

int main()
{
    int n, key;
    cin >> n;
    int a[n];
    cout << "KEY:-";
    cin >> key;
    linear(a, n, key);
}