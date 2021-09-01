#include <iostream>
using namespace std;

void binary(int a[], int n, int key)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == a[mid])
        {
            cout << "KEY founded at index " << mid << endl;
            return;
        }
        else if (key > a[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    cout << "KEY not founded";
    return;
}
int main()
{
    int n, key;
    cout << "Number of Elements";
    cin >> n;
    int a[n];
    cout << "KEY:-";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    binary(a, n, key);
}