#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Number of Elements:-";
    cin >> n;
    int a[n], max_till = INT_MIN, present;
    cout << "Till which Number:-";
    cin >> present;
    for (int i = 0; i < present; i++)
    {
        cin >> a[i];
        max_till = max(max_till, a[i]);
        cout << max_till << endl;
    }
}