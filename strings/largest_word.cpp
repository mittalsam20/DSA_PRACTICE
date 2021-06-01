#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    cout << a << endl;
    int c = 0, mx = -1, s;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            s = i - c;
            c = 0;
        }
        else
            c++;
        mx = max(mx, c);
    }
    cout << mx << endl;
    for (int i = s; i <= s + mx; i++)
        cout << a[i];
}