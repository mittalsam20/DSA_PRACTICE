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

    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += a[j];
            cout << curr_sum << endl;
        }
    }
}
