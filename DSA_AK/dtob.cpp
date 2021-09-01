#include <iostream>
using namespace std;
int main()
{
    cout << "Decimal To Binary";
    int n, bin[10], i = 0;
    cout << "\nDecimal Number:-";
    cin >> n;
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        ++i;
    }
    --i;
    for (; i >= 0; i--)
        cout << bin[i];
}