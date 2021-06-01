#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}