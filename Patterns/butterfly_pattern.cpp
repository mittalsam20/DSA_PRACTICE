#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        for (int j = 0; j < (2 * n - 2 * i) - 2; j++)
            cout << " ";
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        for (int j = 0; j < (2 * n - 2 * i) - 2; j++)
            cout << " ";
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        cout << endl;
    }
}