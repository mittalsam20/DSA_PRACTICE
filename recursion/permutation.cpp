#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
void perm(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < fact(n); j++)
        {
            a[i]
        }
    }
}
int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
}